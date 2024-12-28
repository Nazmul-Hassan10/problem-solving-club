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
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        // for (int i = 0; i < n; i++) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        long long ans = 0, l = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] - i > 0) {
                ans += a[i] - i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
