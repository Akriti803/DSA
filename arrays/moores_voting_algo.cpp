#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 2, 1, 1};
    int count = 0;
    int ans = 0;
    for(int i = 0; i < 5; i++)
    {
        if(count == 0)
        {
            ans = arr[i];
        }
        if(arr[i] == ans)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << ans;
}