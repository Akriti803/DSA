#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={1,2,2,1,1};
    int count =1,ans=arr[0];
    sort(arr,arr+5);
    for(int i=1;i<5;i++){
           if(arr[i]==arr[i-1]){
            count++;
           }
           else{
            count=1;
            ans=arr[i];
           }
          if(count>5/2)
          {
            cout<<ans;
          }
    }
}
