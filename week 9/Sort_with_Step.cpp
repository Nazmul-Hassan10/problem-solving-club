#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (i % k != (v[i] - 1) % k) {
                ans++;
            }
        }

        if (ans == 0) {
            cout << 0 << endl;
        } else if (ans <= 2) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
