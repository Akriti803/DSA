#include<iostream>
using namespace std;
int main()
{
    int n,rem,binary=0,power=1;
    cout<<"enter the number:";
    cin>>n;
    while(n>0){
       rem=n%2;
       binary=binary+rem*power;
       n=n/2;
       power=power*10;
    }
    cout<<"binary is:"<<binary;

}