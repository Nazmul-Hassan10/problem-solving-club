#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    int odd = 0;
    for (int i : freq) {
        if (i % 2 != 0) {
            odd++;
        }
    }

    int new_len = n - k;

    if (new_len % 2 == 0) {
        if (odd <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        if (odd - 1 <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
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
