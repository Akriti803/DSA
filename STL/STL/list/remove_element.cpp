#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n,element;
    cout<<"enter the size:";
    cin>>n;
    list<int>l;
    list<int>::iterator it;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        l.push_back(a);
    }
    cout<<"the elements of the list are:";
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<"enter the element that you want to remove:"<<endl;
    cin>>element;
    l.remove(element);
    cout<<"the new list is:"<<endl;
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}