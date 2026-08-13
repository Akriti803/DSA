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
  void push_front( int val){
       Node* newNode=new Node(val);
       if(head==NULL){
        head=tail=newNode;
        return;
       }
       else{
        newNode->next=head;
        head=newNode;
       }
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
  void pop_front()
  {
    
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
    
}  