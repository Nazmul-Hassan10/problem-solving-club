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

        int max_b = INT_MIN;
        int max_a = INT_MIN;
        int idx_bob, idx_alice;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] > max_b) {
                max_b = b[i];
                idx_alice = i;
            }
        }
        a[idx_alice] = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > max_a) {
                max_a = a[i];
                idx_bob = i;
            }
        }

        // cout << max_b << " " << a[idx_alice] << endl;
        // cout << max_a << " " << b[idx_bob] << endl;

        if (max(max_b, a[idx_alice]) > max(max_a, b[idx_bob])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
