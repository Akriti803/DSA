#include<iostream>
using namespace std;
int main()
{
int n,xor1=0,xor2=0,ans,N;
    cout<<"enter the size of the array:";
    cin>>n;
    n=N-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the elements:"<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"the original array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=N;i++){
        xor1=xor1^i;
    }
    for(int i=0;i<N-1;i++){
        xor2=xor2^arr[i];
    }
    ans=xor1^xor2;
    cout<<"the missing number is:"<<ans;
}