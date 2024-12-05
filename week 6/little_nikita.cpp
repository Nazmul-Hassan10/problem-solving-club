#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    if (n >= m) {
        int minus = n - m;
        if (minus % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }
    cout << "NO" << endl;
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