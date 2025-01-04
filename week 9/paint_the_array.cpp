#include <bits/stdc++.h>
using namespace std;

bool color_or_not(vector<long long> &v, long long g, int idx) {
    for (int i = idx; i < v.size(); i += 2) {
        if (v[i] % g == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        long long g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2) {
            g1 = __gcd(g1, v[i]);
        }
        for (int i = 1; i < n; i += 2) {
            g2 = __gcd(g2, v[i]);
        }

        long long ans = 0;
        if (!color_or_not(v, g2, 0)) {
            ans = g2;
        } else if (!color_or_not(v, g1, 1)) {
            ans = g1;
        }

        cout << ans << endl;
    }

    return 0;
}
