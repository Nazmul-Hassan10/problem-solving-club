#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    int k = n / 2;

    string s;
    char cur = 'A';
    while (k--) {
        if (cur == 'A') {
            s.push_back('A');
            s.push_back('A');
            cur = 'B';
        } else {
            s.push_back('B');
            s.push_back('B');
            cur = 'A';
        }
    }
    cout << "YES" << endl;
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