#include<iostream>
using namespace std;
int remove_duplicate(int arr[],int size){
        int i=0;
        for (int j=1;j<size;j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
}
int main()
{
    int n,new_size;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the elements:"<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"the original array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the new array is :"<<endl;
    new_size=remove_duplicate(arr,n);
    for(int i=0;i<new_size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
