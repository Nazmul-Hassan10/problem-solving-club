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
        vector<int> a(n), h(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> h[i];

        int sum = 0, ans = INT_MIN, l = 0, r = 0;

        while (r < n) {
            if (r > 0 && h[r - 1] % h[r] != 0) {
                sum = 0;
                l = r;
            }

            sum += a[r];
            while (sum > k) {
                sum -= a[l];
                l++;
            }

            ans = max(ans, r - l + 1);
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}