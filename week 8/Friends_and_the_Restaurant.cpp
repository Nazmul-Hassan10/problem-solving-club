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
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; i++) cin >> v1[i];
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v2[i] = x - v1[i];
        }
        // for (auto it : v2) cout << it << " ";
        sort(v2.begin(), v2.end(), greater<int>());

        int l = 0, r = n - 1, cnt = 0;
        while (l < r) {
            if (v2[l] + v2[r] >= 0) {
                cnt++;
                l++;
                r--;
            } else {
                r--;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}