#include<iostream>
using namespace std;
void print(int x,int n){
    if(x==n+1){
        return;
    }
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}