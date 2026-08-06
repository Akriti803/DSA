#include<iostream>
#include<algorithm>
using namespace std;
int reverse_left(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
} 
int main()
{
     int n,d;
     cout<<"enter the size of the array:";
     cin>>n;
    cout<<"enter place from where you want to rotate the array:";
    cin>>d;
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
    reverse_left(arr,n,d);
    cout<<"the rotated array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }


