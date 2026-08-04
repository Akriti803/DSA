#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,element;
    cout<<"enter the size:"<<endl;
    cin>>n;
    cout<<"enter the element you want to search for:";
    cin>>element;
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
        if(*it==element){
            cout<<"the element is found at:"<<it-v.begin();
            return 0;
        }
    }
    cout<<"element not found:";
}