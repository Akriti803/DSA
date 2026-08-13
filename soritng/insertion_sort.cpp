#include<iostream>
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
    for(int i=1;i<n;i++){
         int current_idx=arr[i];
         int previous=i-1;
        while(previous>=0 && arr[previous]>current_idx){
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=current_idx;
    }
    cout<<"the loop is:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}