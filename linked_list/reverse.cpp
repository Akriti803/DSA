#include<iostream>
using namespace std;
class Node{
public:
       int data;
       Node* next;
       Node(int val){
        data =val;
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
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
  }
  Node*  reverse()
  {
    Node* prev=NULL;
    Node* cur=head;
    Node* next=NULL;
    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;

    }
    head=prev;
    return prev;
  }
  void print()
  {
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
  }
  
};
int main()
{
    list ll;
    int n;
    cout<<"enter the size of the list:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the value:"<<endl;
        cin>>x;
        ll.push_back(x);
    }
    ll.reverse();
    ll.print();
}  