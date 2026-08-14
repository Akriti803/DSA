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
  
  int search(int val){
       Node* temp=head;
       int idx=0;
       while(temp!=NULL){
        if(temp->data==val){
            cout<<"the index at which the value exists is :"<<idx<<endl;
        }
        temp=temp->next;
        idx++;
       }
       return -1;
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
    int n,val;
    cout<<"enter the size of the list:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the value:"<<endl;
        cin>>x;
        ll.push_back(x);
    }
    cout<<"enter the val you want to search for:"<<endl;
    cin>>val;
    ll.print();
    ll.search(val);
}