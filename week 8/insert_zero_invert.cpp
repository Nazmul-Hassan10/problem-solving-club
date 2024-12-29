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

        if (v[n - 1] == 1) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<int> v2;
        int l = n - 1;
        while (l >= 0) {
            int one_cnt = 0;
            int zero_cnt = 0;
            int idx = l;
            while (idx >= 0 && v[idx] == 0) {
                zero_cnt++;
                idx--;
            }
            while (idx >= 0 && v[idx] == 1) {
                one_cnt++;
                idx--;
            }

            for (int k = 0; k < zero_cnt - 1; k++) {
                v2.push_back(0);
            }
            for (int k = 0; k < one_cnt; k++) {
                v2.push_back(0);
            }
            v2.push_back(one_cnt);
            l = idx;
        }

        for (auto it : v2) cout << it << " ";
        cout << endl;
    }

    return 0;
}