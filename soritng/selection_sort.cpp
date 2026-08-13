#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
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
    for(int i=0;i<n-1;i++){
         int smallest_idx=i;
         for(int j=i+1;j<n;j++){
              if(arr[j]<arr[smallest_idx]){
                smallest_idx=j;
              }
         }
         swap(arr[i],arr[smallest_idx]);
    }
    cout<<"the sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}