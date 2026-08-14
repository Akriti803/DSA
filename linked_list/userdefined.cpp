#include<iostream>
using namespace std;
class Node
{
public:
    Node* next;
    int data;
    Node(int val){
        next=NULL;
        data=val;
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
    void push_front(int val){
           Node* newNode=new Node(val);
           if(head==NULL)
           {
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
       if(head==NULL)
       {
        head=tail=newNode;
       }
       else{
        tail->next=newNode;
        tail=newNode;
       }
    }
    void pop_front()
    {
        if(head==NULL){
            cout<<"the list is empyt"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back()
    {
        if(head==NULL){
            cout<<"the list is empty"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void print()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
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
    ll.pop_back();
    ll.pop_front();
    ll.print();
}