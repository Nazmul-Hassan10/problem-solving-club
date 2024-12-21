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
        vector<int> v;
        long long one = 0, cnt = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
            if (x == 1) {
                one++;
            } else {
                cnt += one;
            }
        }

        long long ans = cnt;

        vector<int> v2 = v;
        for (int i = 0; i < n; i++) {
            if (v2[i] == 0) {
                v2[i] = 1;
                break;
            }
        }
        one = 0;
        cnt = 0;
        for (int i = 0; i < n; i++) {
            if (v2[i] == 1) {
                one++;
            } else {
                cnt += one;
            }
        }
        ans = max(ans, cnt);

        v2 = v;
        for (int i = n - 1; i >= 0; i--) {
            if (v2[i] == 1) {
                v2[i] = 0;
                break;
            }
        }
        one = 0;
        cnt = 0;
        for (int i = 0; i < n; i++) {
            if (v2[i] == 1) {
                one++;
            } else {
                cnt += one;
            }
        }
        ans = max(ans, cnt);

        cout << ans << endl;
    }

    return 0;
}
