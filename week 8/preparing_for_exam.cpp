#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }

        set<int> st;
        for (int i = 0; i < k; i++) {
            int q;
            cin >> q;
            st.insert(q);
        }

        vector<int> ans;
        for (int i = 0; i < m; i++) {
            bool flag = true;
            for (int j = 1; j <= n; j++) {
                if (j != v[i]) {
                    if (st.find(j) == st.end()) {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) {
                ans.push_back(1);
            } else {
                ans.push_back(0);
            }
        }

        for (auto it : ans) cout << it;
        cout << endl;
    }

    return 0;
}
