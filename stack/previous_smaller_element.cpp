#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    stack<int> s;
    for(int i = 0; i < n; i++) {
        while(!s.empty() && s.top() >= nums[i]) {
            s.pop();
        }
        if(s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }

        s.push(nums[i]);
    }

    return ans;
}

int main() {
    vector<int> nums = {6, 8, 0, 1, 3};

    vector<int> ans = nextGreaterElement(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}