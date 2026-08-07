#include<iostream>
using namespace std;
int main()
{
int n,xor1=0,count =0;
    cout<<"enter the size of the array:";
    cin>>n;
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
    for(int i=0;i<n;i++){
        xor1^=arr[i];
    }
    cout<<"the element that appears only once is:"<<xor1;
}