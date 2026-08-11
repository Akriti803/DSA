#include<iostream>
using namespace std;
int main()
{
    int n,target,pair_sum=0,i=0;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the target:";
    cin>>target;
    int j=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enteer the elements"<<i+1<<":"<<endl; 
        cin>>arr[i];  
     }
     cout<<"enter the array:";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     while(i<=j){
        pair_sum=arr[i]+arr[j];
        if(pair_sum==target){
            cout<<"the pair is with this sum is  :"<<arr[i]<<","<<arr[j];
            break;
        }
        else if(pair_sum>target){
            j--;
        }
        else{
            i++;
        }
     }
}