#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    vector<int> v2;
    for (auto [key, count] : mp) {
        if (count >= k) {
            v2.push_back(key);
        }
    }

    if (v2.empty()) {
        cout << -1 << endl;
        return;
    }

    int l = v2[0], r = v2[0], max_ln = 1, curr_ln = 1;
    int val_l = v2[0], val_r = v2[0];

    for (int i = 1; i < v2.size(); i++) {
        if (v2[i - 1] + 1 == v2[i]) {
            r = v2[i];
            curr_ln++;
        } else {
            curr_ln = 1;
            l = v2[i];
            r = v2[i];
        }

        if (curr_ln > max_ln) {
            max_ln = curr_ln;
            val_l = l;
            val_r = r;
        }
    }

    cout << val_l << " " << val_r << endl;
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
