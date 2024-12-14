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

        int val = INT_MAX;
        int flag = false;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] >= k) {
                flag = true;
                int rem = v[i] % k;
                val = min(val, rem);
            }
        }

        if (flag) {
            cout << val << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}