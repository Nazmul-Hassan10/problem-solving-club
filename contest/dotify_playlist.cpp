#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, l;
    cin >> n >> k >> l;

    vector<int> final_v;

    while (n--) {
        int m, li;
        cin >> m >> li;

        int max_len = INT_MIN;
        if (li == l) {
            final_v.push_back(m);
        }
    }
    if (final_v.size() < k) {
        cout << -1 << endl;
        return;
    }

    sort(final_v.begin(), final_v.end(), greater<int>());

    // for (auto i : final_v) cout << i << " ";

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += final_v[i];
    }

    cout << sum << endl;
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