#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n - 1), a(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    a[0] = b[0] / 2;
    a[1] = b[0] - a[0];
    // cout << a[0] << " " << a[1] << endl;

    for (int i = 2; i < n; i++) {
        a[i] = b[i - 1] - a[i - 1];
    }

    for (auto it : a) cout << it << " ";
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