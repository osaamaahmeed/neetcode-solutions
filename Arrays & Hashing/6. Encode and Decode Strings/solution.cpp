#include <bits/stdc++.h>
using namespace std;

string encode(vector<string>& strs) {
    string s = "";
    vector<int>sizes;
    for (string& i : strs) sizes.push_back(i.size());
    for (int& i : sizes) s += to_string(i) + ",";
    s += '#';
    for (string& i : strs) s += i;
    return s;
}

vector<string> decode(string s) {
    vector<string>ans;
    vector<int>sizes;
    int i = 0;
    while (s[i] != '#') {
        string temp = "";
        while (s[i] != ',') temp += s[i], i++;
        sizes.push_back(stoi(temp));
        i++;
    }
    i++;
    for (int& j : sizes) {
        string temp = "";
        for (int x = 0; x < j; x++) {
            temp += s[i];
            i++;
        }
        ans.push_back(temp);
        // i++;
    }

    return ans;
}

int main () {
    vector<string> s = {"VeryLongStringWithoutAnySpacesOrSpecialCharactersRepeatedManyTimesVeryLongStringWithoutAnySpacesOrSpecialCharactersRepeatedManyTimes"};
    string e = encode(s);
    vector<string> ans = decode(e);
    for (auto i : ans) cout << i << " ";
}