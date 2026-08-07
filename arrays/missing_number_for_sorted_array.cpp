#include<iostream>
using namespace std;
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
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
          cout<<"the missing element is:"<<i+1;
          break;
        }
    }
}