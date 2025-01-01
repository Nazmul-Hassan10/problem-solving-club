#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n * 4; i++) {
            mp[s[i]]++;
        }

        int ans = 0;
        for (char c : {'A', 'B', 'C', 'D'}) {
            ans += min(mp[c], n);
        }
        cout << ans << endl;
    }

    return 0;
}