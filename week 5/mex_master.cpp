#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    int zr = 0, m_x = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 0) {
            zr++;
        }
        m_x = max(m_x, a[i]);
    }

    if (zr <= n - zr + 1) {
        cout << "0" << endl;
        return;
    }
    if (m_x == 0) {
        cout << "1" << endl;
    } else if (m_x == 1) {
        cout << "2" << endl;
    } else {
        cout << "1" << endl;
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