#include<iostream>
using namespace std;
int main()
{
int n,count =0,maxc=0;
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
        if(arr[i]==1){
             count ++;
             maxc=max(maxc,count);
        }
        else{
            count=0;
        }
    }
    cout<<maxc;
}