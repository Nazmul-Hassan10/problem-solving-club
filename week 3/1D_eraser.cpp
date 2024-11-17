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

        int ans = 0;
        int l = 0;
        int r = 0;

        while (r < n) {
            if (s[r] == 'B') {
                ans++;
                r = r + k;
            } else {
                r++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}