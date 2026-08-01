#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n,largest=INT_MIN,second_largest=INT_MIN;
    cout<<"enter the size:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>::iterator it;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    for(auto it=v.begin();it!=v.end();it++){
        if(*it>largest){
            largest=*it;
        }
    }
    for(auto it=v.begin();it!=v.end();it++){
        if(*it!=largest && *it>second_largest){
            second_largest=*it;
        }
    }
    cout<<"the second largest  element is:"<<second_largest;
}