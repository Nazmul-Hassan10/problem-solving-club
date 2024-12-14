#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        int ans = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] * x > y) {
                ans += y;
            } else {
                int cost = x * v[i];
                ans += cost;
            }
        }

        cout << ans << endl;
    }

    return 0;
}