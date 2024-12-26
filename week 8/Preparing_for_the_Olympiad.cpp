#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> v2[i];
        }

        int ans = 0, val;
        for (int i = 0; i < n - 1; ++i) {
            if (v1[i] > v2[i + 1]) {
                val = v1[i] - v2[i + 1];
                ans += val;
            }
        }
        ans += v1[n - 1];

        cout << ans << endl;
    }

    return 0;
}
