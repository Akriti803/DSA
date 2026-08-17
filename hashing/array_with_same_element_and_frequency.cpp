#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n1;
    cout << "Enter the size of array 1: ";
    cin >> n1;
    int arr1[n1];
    unordered_map<int,int> hashh1;
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
        hashh1[arr1[i]]++;
    }
    int n2;
    cout << "Enter the size of array 2: ";
    cin >> n2;
    int arr2[n2];
    unordered_map<int,int> hashh2;
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
        hashh2[arr2[i]]++;
    }
    if(n1 != n2)
    {
        cout << "Arrays are NOT same";
    }
    for(auto it1 : hashh1)
    {
        if(hashh2[it1.first] != it1.second)
        {
            cout << "Arrays are NOT same";
            break;
        }
    }
    cout << "Arrays have same elements with same frequencies";
}