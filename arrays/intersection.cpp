#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,i=0,j=0;
    vector<int>ans;
    cout<<"enter the size of array 1:"<<endl;
    cin>>n;
    cout<<"enter the size of array 2:"<<endl;
    cin>>m;
    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<"enter the elements of array 1:"<<i+1<<endl;
        cin>>arr1[i];
    }
    cout<<"the original array 1 is :";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int arr2[m];
    for(int j=0;j<m;j++){
        cout<<"enter the elements of array 2:"<<j+1<<endl;
        cin>>arr2[j];
    }
    cout<<"the original array 2 is :";
    for(int j=0;j<m;j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){ 
              j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
       
    }
    cout<<"the intersection of the array is:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}