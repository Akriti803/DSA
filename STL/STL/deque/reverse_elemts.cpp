#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
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
    cout<<"the elements in reverse order are:"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}