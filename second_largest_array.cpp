#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,second_largest=INT_MIN;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element:"<<i+1<<endl;
        cin>>arr[i];
    }
    int largest=arr[0];
    cout<<"the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=largest && second_largest<arr[i]){
            second_largest=arr[i];
        }
    }
     cout<<"the seond largest element is :"<<second_largest;
     cout<<endl;

}