#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int ans = 0;
    set<int>s;
    for (int& i : nums) s.insert(i);

    set<int>::iterator it = s.begin();
    while (it != s.end()) {
        set<int>::iterator temp = it;
        int next = *temp;
        int curr = 0;
        while (s.count(next)) {
            curr++;
            next++;
            ++temp;
        }
        ans = max(ans, curr);
        it = temp;
    }
    return ans;
}

int main () {
    vector<int> a = {100,4,200,1,3,2};
    cout << longestConsecutive(a);

}