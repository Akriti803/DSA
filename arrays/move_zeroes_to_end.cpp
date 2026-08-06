#include<iostream>
#include<algorithm>
using namespace std;
int moving_of_zeroes(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size:";
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
    moving_of_zeroes(arr,n);
    cout<<"the new array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}