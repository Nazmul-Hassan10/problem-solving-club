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
        vector<char> s(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int cnt_w = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                cnt_w++;
            }
        }

        int ans = cnt_w;
        int l = k;

        while (l < n) {
            if (s[l] == 'W') {
                cnt_w++;
            }
            if (s[l - k] == 'W') {
                cnt_w--;
            }

            ans = min(ans, cnt_w);
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}
