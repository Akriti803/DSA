#include<iostream>
using namespace std;
void reverse_of_array(int arr[], int size){
         int start =0,end=size-1;
         while(start<=end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
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
    reverse_of_array(arr,n);
    cout<<"the reversed array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
