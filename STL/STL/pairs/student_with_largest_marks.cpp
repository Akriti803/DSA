#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
  int n,largest=INT_MIN;
  string student;
  vector<pair<string,float>>p;
  cout<<"enter the size:";
  cin>>n;
  for(int i=0;i<n;i++){
    string a;
    float b;
    cin>>a>>b;
    p.push_back({a,b});
  }
  cout<<"the pair of students and their marks is :"<<endl;
  for(int i=0;i<n;i++){
    cout<<"("<<p[i].first<<","<<p[i].second<<")";
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    if(p[i].second>largest){
        largest=p[i].second;
        student=p[i].first;
    } 
  cout<<"the stuednt with largest marks is :"<<student<<"="<<largest;
  break;
  }
}