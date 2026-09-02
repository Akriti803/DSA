#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="akriti singh";
    int st=0,end=s.size()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
    int i=0;
    while(s[i]!='\0'){
       cout<<s[i]<<" ";
       i++;
    }
    cout<<endl;
}