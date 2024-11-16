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
        vector<vector<int>> mat(n, vector<int>(n - 1));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> mat[i][j];
            }
        }

        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int last_value = mat[i][n - 2];
            mp[last_value]++;
        }

        vector<int> v(n);
        int sec_l, last;
        for (auto it : mp) {
            if (it.second == 1) {
                sec_l = it.first;
            } else {
                last = it.first;
            }
        }

        v[n - 1] = last;
        v[n - 2] = sec_l;

        for (int i = 0; i < n; i++) {
            if (mat[i][n - 2] == sec_l) {
                for (int j = 0; j < n - 1; j++) {
                    v[j] = mat[i][j];
                }
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
