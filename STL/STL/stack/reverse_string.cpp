#include<iostream>
#include<stack>
using namespace std;
int main()
{
   string s;
   cout<<"enter the string:";
   cin>>s;
   stack<char>st;
   for(char ch:s){
    st.push(ch);
   }
   s="";//emptying the stirng
   cout<<"the reversed string is:";
   while(!st.empty()){
    cout<<st.top();
    st.pop();
   }
}