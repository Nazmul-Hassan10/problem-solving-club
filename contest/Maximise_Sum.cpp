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
        vector<int> v(n);

        int count_neg = 0;
        long long sum = 0;
        int abs_val = INT_MAX;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < 0) {
                count_neg++;
            }
            sum += abs(v[i]);
            abs_val = min(abs_val, abs(v[i]));
        }

        if (count_neg % 2 != 0) {
            sum = sum - (2 * abs_val);
        }

        cout << sum << endl;
    }

    return 0;
}
