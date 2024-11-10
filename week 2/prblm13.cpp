#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<int> v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }

        string c;
        cin >> c;

        sort(v.begin(), v.end());
        sort(c.begin(), c.end());

        set<int> idx;
        int c_index = 0;

        for (int i = 0; i < m; i++) {
            if (idx.count(v[i]) == 0) {
                s[v[i] - 1] = c[c_index];
                c_index++;
                idx.insert(v[i]);
            }
        }

        cout << s << endl;
    }

    return 0;
}
