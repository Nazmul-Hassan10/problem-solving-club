#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    int l = 0, r = 0;
    long long ans = 0;

    while (l < n && r < m) {
        int curr = v1[l], cnt1 = 0, cnt2 = 0;

        while (l < n && v1[l] == curr) {
            cnt1++;
            l++;
        }
        while (r < m && curr > v2[r]) {
            r++;
        }

        while (r < m && v2[r] == curr) {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << endl;
    return 0;
}