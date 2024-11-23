#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if (sum < s) {
        cout << -1 << endl;
        return;
    }

    sum = 0;
    int l = 0, r = 0, opt = INT_MIN;

    while (r < n) {
        sum += v[r];

        while (sum > s) {
            sum -= v[l];
            l++;
        }

        if (sum == s) {
            opt = max(opt, r - l + 1);
        }
        r++;
    }
    cout << n - opt << endl;
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