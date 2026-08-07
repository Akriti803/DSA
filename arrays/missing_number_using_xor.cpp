#include<iostream>
using namespace std;
int main()
{
    int N, xor1 = 0, xor2 = 0, ans;
    cout << "Enter the total number of elements (N): ";
    cin >> N;
    int arr[N - 1];
    for(int i = 0; i < N - 1; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "The original array is: ";
    for(int i = 0; i < N - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 1; i <= N; i++) {
        xor1 ^= i;
    }
    for(int i = 0; i < N - 1; i++) {
        xor2 ^= arr[i];
    }
    ans = xor1 ^ xor2;
    cout << "The missing number is: " << ans;
}