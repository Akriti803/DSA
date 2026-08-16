#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string:";
    getline(cin,s);
    int q;
    cout<<"enter the number of queries:"<<endl;
    cin>>q;
    cin.ignore();
    int hash[256]={0};//we dont have such complexity related to ki hash ka size agar zaada bad ho gaya to kyunki we know ki at max the total number of characters are 256 only
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;//isme the particular charcter apni ascii value pe jala jaayega kyun we have a mx size of 256 jisme we can have uppercase lowercase etc
    }
    while(q--){
       char c;//example cahrch='d' ye aise aata hia isliye we dont write single quotes me c
       cout<<"enter the charater:";
       cin.get(c);//this will read the space
       cin.ignore();
       cout<<"the number of occurences of "<< c<<" is:"<<hash[c]<<endl;
    }
}