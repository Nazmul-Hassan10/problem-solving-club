#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0, r = 0, sum = 0, ans = INT_MIN, sz = v.size();

    while (r < sz) {
        sum += v[r];
        cout << sum << " ";

        if (k >= 0) {
            while (l <= r && sum > k) {
                sum -= v[l];
                l++;
            }
        } else {
            while (l <= r && sum < k) {
                sum -= v[l];
                l++;
            }
        }

        if (sum == k) {
            ans = max(ans, r - l + 1);
        }

        r++;
    }

    cout << endl << ans;
    return 0;
}