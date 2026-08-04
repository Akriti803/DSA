#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n,element;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the element that you want to search for:";
    cin>>element;
    deque<int>dq;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        dq.push_back(a);
    }
    cout<<"elements of the deque are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(dq[i]==element){
            cout<<"the element is found at:"<<i;
        }
    }
    cout<<"the element is not found:";
}