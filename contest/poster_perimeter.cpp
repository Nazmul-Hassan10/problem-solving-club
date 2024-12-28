#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int min_val = INT_MAX;
        for (int l = 1; l <= n; l++) {
            for (int w = 1; w <= m; w++) {
                int val = 2 * (l + w);
                int diff = abs(k - val);
                min_val = min(min_val, diff);
                // cout << min_val;
            }
        }

        cout << min_val << endl;
    }

    return 0;
}
