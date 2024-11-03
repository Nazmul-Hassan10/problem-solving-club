#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string encode;
    cin >> encode;

    set<char> uni_ch;

    for (int i = 0; i < encode.size(); i++)
    {
        uni_ch.insert(encode[i]);
    }
    
    // for(auto it : uni_ch) cout << it << " ";

    string r(uni_ch.begin(), uni_ch.end());

    map<char, char> mapping;

    int len = r.size();
    int idx = len - 1;
    for (int i = 0; i < len; ++i) {
        mapping[r[i]] = r[idx - i];
    }

    string s;
    for (char c : encode) {
        s += mapping[c];
        // cout << s << endl;
    }

    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
