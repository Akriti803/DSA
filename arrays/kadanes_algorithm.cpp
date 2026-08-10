#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n,current_sum=0,maximum_sum=INT_MIN;
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
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        maximum_sum=max(current_sum,maximum_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<"the maximum sum is:"<<maximum_sum;

}