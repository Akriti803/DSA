#include<iostream>
using namespace std;
void rotate_by_one_place(int arr[],int n){
         int start=0,end=n-1;
         while(start<=end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            end--;
         }
            return;
}
int main(){
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
    rotate_by_one_place(arr,n);
    cout<<"the rotated array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}