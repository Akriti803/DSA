#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size :";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int largest=v[0];
    vector<int>::iterator it;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        if(*it>largest){
            largest=*it;
        }
    }
    cout<<"the largest element is:"<<largest;
}