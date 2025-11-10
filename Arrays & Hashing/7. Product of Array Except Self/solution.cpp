#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> pref(n), suff(n);
    pref[0] = nums[0];
    for (int i = 1; i < n; i++) pref[i] = pref[i-1]*nums[i];
    suff[n-1] = nums[n-1];
    for (int i = n-2; i >= 0; i--) suff[i] = suff[i+1]*nums[i];
    vector<int>ans(n);
    ans[0] = suff[1];
    ans[n-1] = pref[n-2];
    for (int i = 1; i < n-1; i++) {
        ans[i] = pref[i-1] * suff[i+1];
    }
    return ans;
}

int main () {
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);
    for (int& i : ans) cout << i << " ";
}