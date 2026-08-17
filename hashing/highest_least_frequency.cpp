#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<climits>
using namespace std;
int main()
{
    int n,maxf=INT_MIN,minif=INT_MAX,maxe,minie;
    cout<<"enter the size of the integer array:";
    cin>>n;
    int arr[n];
    unordered_map<int,int>hashh;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hashh[arr[i]]++;
    }
    int q;
    cout<<"enter the number of queries:";
    cin>>q;
    while(q--){
        int num;
        cout<<"enter number:"<<endl;
        cin>>num;
        cout<<hashh[num]<<endl;
    }
    for(auto it:hashh){
       if(it.second>maxf){
          maxf=it.second;
          maxe=it.first;
       }
       if(it.second<minif){
        minif=it.second;
        minie=it.first;
       }
    }
    cout<<"element with maximum frequency is:"<<maxe<<endl;
    cout<<"element with minimum frequency is:"<<minie<<endl;
}