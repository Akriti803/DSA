#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    unordered_map<int,int>hashh;
    for(int i=0;i<n;i++){
         cin>>arr[i];
         hashh[arr[i]]++;
    }
    int q;
    cout<<"enter the number of queries:"<<endl;
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the number:"<<endl;
        cin>>num;
        cout<<"the occurence is:"<<hashh[num]<<endl;
    }
    for(auto it:hashh){
            count++;//this is counting the enteries in the hashmap not the frequency
    }
    cout<<"the no of distinct elements are:"<<count;
}