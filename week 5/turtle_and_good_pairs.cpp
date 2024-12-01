#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char a : s) {
        freq[a - 'a']++;
    }

    int k = n;
    while (k != 0) {
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                char ans = i + 'a';
                cout << ans;
                freq[i]--;
                k--;
            }
        }
    }

    cout << endl;
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