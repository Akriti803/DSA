#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    vector<pair<int,int>>p1;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        p1.push_back({a,b});
    }
    for(int i=0;i<n;i++){
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }
    cout<<endl;
    vector<pair<int,int>>p2;
    p2.swap(p1);
    for(int i=0;i<n;i++){
        cout<<"size of p2 is :"<<p2.size()<<endl;
        break;
    }
    cout<<"size of p1 is:"<<p1.size();
}