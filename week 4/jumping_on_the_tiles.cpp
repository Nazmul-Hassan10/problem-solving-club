#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        vector<int> v[26];

        for (int i = 0; i < n; i++) {
            v[s[i] - 'a'].push_back(i + 1);
        }

        vector<int> ans;

        int cost = abs(s[0] - s[n - 1]);
        int m = 0;
        if (s[0] < s[n - 1]) {
            for (int i = s[0] - 'a'; i <= s[n - 1] - 'a'; i++) {
                m += v[i].size();
                int l = v[i].size();

                for (int j = 0; j < l; j++) {
                    ans.push_back(v[i][j]);
                }
            }
        } else {
            for (int i = s[0] - 'a'; i >= s[n - 1] - 'a'; i--) {
                m += v[i].size();
                int l = v[i].size();

                for (int j = 0; j < l; j++) {
                    ans.push_back(v[i][j]);
                }
            }
        }

        cout << cost << " " << m << endl;

        for (int i = 0; i < m; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
