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
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int my_tic = v[0];
        sort(v.begin(), v.end());

        int mn_num = 1, mx_num = 1000000;
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i] == my_tic) continue;
            int l = (my_tic + v[i]) / 2;
            int r = (my_tic + v[i] + 1) / 2;

            if (v[i] > my_tic) {
                mx_num = min(mx_num, l);
            } else {
                mn_num = max(mn_num, r);
            }
        }

        ans = max(0, mx_num - mn_num + 1);
        cout << ans << endl;
    }
    return 0;
}
