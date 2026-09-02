#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int> v,int tar,int st,int end){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==tar){
            return mid;
        }
        else if(mid>tar){
            return binary(v,tar,st,mid-1);
        }
        else{
            return binary(v,tar,mid+1,end);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=binary(arr,target,0,n-1);
    cout<<ans<<endl;
}