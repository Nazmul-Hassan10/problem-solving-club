#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, z;
    cin >> n >> z;
    vector<pair<int, int>> x(n);

    for (int i = 0; i < n; i++) cin >> x[i].first;
    for (int i = 0; i < n; i++) cin >> x[i].second;

    vector<int> y(n);
    for (int i = 0; i < n; i++) {
        y[i] = x[i].first * x[i].second;
    }

    sort(y.rbegin(), y.rend());

    int cnt = 0, val;

    for (int it1 : y) {
        if (z <= 0) break;

        z -= it1;
        cnt++;
    }

    if (z <= 0) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
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