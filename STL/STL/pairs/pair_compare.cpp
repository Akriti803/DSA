#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p1;
    pair<int,int>p2;
    cout<<"enter the first and second element of the first pair:"<<endl;
    cin>>p1.first>>p1.second;
    cout<<"enter the first and second element of the second pair:"<<endl;
    cin>>p2.first>>p2.second;
    if(p1.first==p2.first && p1.second==p2.second){
        cout<<"both the pairs are equal;"<<endl;
    }
    else if(p1.first==p2.first){
        cout<<"we'll compare the first element:";
        if(p1.second>p2.second){
            cout<<p1.second<<">"<<p2.second;
        }
        else{
            cout<<p2.second<<">"<<p1.second;
        }
    }
    else if(p1.second==p2.second){
        cout<<"we'll compare the second element:"<<endl;
        if(p1.first>p2.first){
            cout<<p1.first<<">"<<p2.first;
        }
        else if(p1.first<p2.first){
            cout<<p2.first<<">"<<p1.first;
        }
    }
  }
