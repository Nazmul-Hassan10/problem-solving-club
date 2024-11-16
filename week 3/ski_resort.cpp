#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                cnt++;
            } else {
                if (cnt >= k) {
                    long long s = cnt - k + 1;
                    ans += s * (s + 1) / 2;
                }
                cnt = 0;
            }
        }

        if (cnt >= k) {
            long long s = cnt - k + 1;
            ans += s * (s + 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}
