#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cout<<"entert the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"eter the elements of the array:"<<i+1<<endl;
        cin>>arr[i];
    }
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"enter the number of queries:";
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the number for which u have query:"<<endl;
        cin>>number;
        cout<<"the total number of occurence is:"<<hash[number]<<endl;
    }
}