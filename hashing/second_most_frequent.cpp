#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
int main()
{
     int n,max=INT_MIN,second_max=INT_MIN,maxe,smaxe;
     cout<<"enter the size of the array:";
     cin>>n;
     int arr[n];
     unordered_map<int,int>hashh;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        hashh[arr[i]]++;
     }
     int q;
     cout<<"enter the numbre of queries:";
     cin>>q;
     while(q--){
        int num;
        cout<<"enter the number:";
        cin>>num;
        cout<<"the frequency is:"<<hashh[num]<<endl;
     }
     cout<<endl;
     unordered_map<int,int>::iterator it;
     for(auto it:hashh){
        if(it.second>max){
            max=it.second;//this gives the frequency 
            maxe=it.first;//this gives us the element jiski frequency max ho
        }
        else if(it.second<max && second_max<it.second){
                second_max=it.second;
                smaxe=it.first;
            }
     }
     cout<<"the element with the second highest frequensy is:"<<smaxe;
}