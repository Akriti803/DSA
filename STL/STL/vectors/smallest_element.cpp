#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n,smallest=INT_MAX;
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
        if(*it<smallest){
            smallest=*it;
        }
    }
    cout<<"the smallest element is:"<<smallest;
}