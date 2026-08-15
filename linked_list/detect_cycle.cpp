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
  //created a cycle first
  void createcycle(int pos){
      if(pos==-1){
        return;
      }
      Node* temp=head;
      for(int i=0;i<pos;i++){
        temp=temp->next;
      }
      tail->next=temp;
  }
  //detecting of the cycle
  void detectcycle(){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"the ll has cycle in it"<<endl;
            return ;
        }
    }
    cout<<"the ll does not has a cycle"<<endl;
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
    int pos;
    cout<<"enter the position where you want to create cycle or neter -1 for no cycle:";
    cin>>pos;
    ll.createcycle(pos);
    ll.detectcycle();
}  