#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the elements"<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the possible subarrays are:"<<endl;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
            cout<<arr[i]<<",";
            }
            cout<<" ";
        }
        cout<<endl;
    }


}