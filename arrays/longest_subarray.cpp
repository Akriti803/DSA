#include<iostream>
using namespace std;
int main()
{
int n,sum;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the sum that you want:";
    cin>>sum;
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
}