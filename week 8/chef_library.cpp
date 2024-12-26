#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int ans = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        mp[v[i]] = max(mp[v[i]], i + 1);
    }

    for (auto it : mp) {
        ans += it.second;
    }

    cout << ans << endl;
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