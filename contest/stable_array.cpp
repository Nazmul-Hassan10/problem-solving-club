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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int m = 0;
        int cnt = 0, ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] >= m) {
                ans = max(cnt, ans);
                cnt = 0;
                m = v[i];
            } else
                cnt++;
        }
        ans = max(cnt, ans);
        cout << ans << endl;
    }
    return 0;
}