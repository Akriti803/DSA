#include<iostream>
#include<vector>
using namespace std;
bool issorted(vector<int> v, int n){
    if(n==1 || n==0){
        return true;
    }
    if(v[n-1]<v[n-2]){
        return false;
    }
    return issorted(v,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(issorted(arr,n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}