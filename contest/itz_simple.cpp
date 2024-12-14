#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> v(n);
        int max_val = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            max_val = max(max_val, v[i]);
        }

        // cout << max_val << " " << sum;

        if (k + max_val > p + (sum - max_val)) {
            cout << "Ved" << endl;
        } else if (k + max_val < p + (sum - max_val)) {
            cout << "Varun" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }

    return 0;
}