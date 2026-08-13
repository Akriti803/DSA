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
    if(head==NULL){
        cout<<"the lost is empty"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
  void pop_back()
  {
    if(head==NULL)
    {
        cout<<"the list is empty"<<endl;
        return;
    }
     Node* temp=head;
     while(temp->next->next!=NULL){
        temp=temp->next;
     }
     temp->next=NULL;
     delete tail;
     tail=temp;
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
    ll.push_front(10); 
    ll.push_front(20); 
    ll.push_front(30); 
    ll.push_front(40); 
    ll.push_back(50);
    ll.push_back(60);
    ll.push_back(70);
    ll.push_back(80);
    ll.pop_front();
    ll.pop_back();
    ll.print();
}  