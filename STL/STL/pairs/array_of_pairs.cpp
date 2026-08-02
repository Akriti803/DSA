#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    pair<int,int>arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    cout<<"the array of vectors is :";
    for(int i=0;i<n;i++){
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}"<<" ";
    }
    cout<<endl;
}