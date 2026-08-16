#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    int q;
    cout<<"enter the number of queries:"<<endl;
    cin>>q;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;//to get the ascii value we do single quotes me a ya fir koi aur char
    }
    while(q--){
       char c;//example cahrch='d' ye aise aata hia isliye we dont write single quotes me c
       cout<<"enter the charater:";
       cin>>c;
       cout<<"the number of occurences of "<< c<<" is:"<<hash[c-'a']<<endl;
    }
}