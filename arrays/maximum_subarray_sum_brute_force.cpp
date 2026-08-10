#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n,maximum_sum=INT_MIN;
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
    for(int start=0;start<n;start++){
        int sum=0;//naye subarray me sum dobara zero hona chahiye 
        for(int end=start;end<n;end++){
            sum+=arr[end];
            maximum_sum=max(sum,maximum_sum);  
        }
    }
    cout<<"the maximum sum is:"<<maximum_sum;

}