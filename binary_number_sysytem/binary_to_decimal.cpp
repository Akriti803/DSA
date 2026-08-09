#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,decimal=0,power=0,last;
    cout<<"enter the binary number:";
    cin>>n;
    while(n>0)
    {
        last=n%10;
        decimal=decimal+last*pow(2,power);
        n=n/10;
        power++;
    }
    cout<<"the number is :"<<decimal;
}