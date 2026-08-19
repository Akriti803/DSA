#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    unordered_map<int,int> hashh;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hashh[arr[i]]++;
    }
    cout << "Elements having frequency greater than n/2 is: ";
    for(auto it : hashh)
    {
        if(it.second>n/2)
        {
            cout << it.first << " ";
        }
        else{
            cout<<"there is none";
        }
    }
}