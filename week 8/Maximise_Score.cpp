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
        vector<int> v(n), v2;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int val = INT_MIN, a = INT_MIN, b = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (i - 1 >= 0) {
                a = abs(v[i] - v[i - 1]);
            }
            if (i + 1 < n) {
                b = abs(v[i] - v[i + 1]);
            }
            val = max(a, b);
            v2.push_back(val);
        }

        int ans = INT_MAX;
        for (auto it : v2) {
            ans = min(ans, it);
        }

        cout << ans << endl;
    }

    return 0;
}