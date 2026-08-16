#include<iostream>
int hashh[10000000];//globally declared the hash just in case we get a large number of queries i.e 10^7
//#include<unordered_map>-we usually declare it like this only because if the number of queries become greter than 10^7
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
    for(int i=0;i<n;i++){
        hashh[arr[i]]+=1;
    }
    int q;
    cout<<"enter the number of queries:";
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the number for which u have query:"<<endl;
        cin>>number;
        cout<<"the total number of occurence is:"<<hashh[number]<<endl;
    }
}