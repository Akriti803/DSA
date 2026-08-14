#include<iostream>
using namespace std;
class Node{
public:
    Node* next;
    int data;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    Node* head;
    Node* tail;
public:
  list()
  {
    head=tail=NULL;
  }
  void push_back(int val){
     Node* newNode=new Node(val);
     if(head==NULL){
        head=tail=newNode;
     }
     else{
        tail->next=newNode;
        tail=newNode;
     }
  }
  void push_front(int val){
     Node* newNode=new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
  }
  void insert(int val,int pos){
    Node* temp=head;
    if(pos<0){
        return ;
    }
    else if(pos==0){
        push_front(val);
        return;
    }
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<<"invalid position";
            return;
        }
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;
 }
 void print()
 {
    Node* temp=head;
    if(head==NULL){
        cout<<"the list is empty:";
        return;
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
 }
};
int main()
{
    list ll;
    int n,val,pos;
    cout<<"enter the size of the list:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the value:"<<endl;
        cin>>x;
        ll.push_back(x);
    }
    cout<<"enter the position at which you want to add:"<<endl;
    cin>>pos;
    cout<<"enter the val you want to add:"<<endl;
    cin>>val;
    ll.insert(val,pos);
    ll.print();
}