#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> v1(n), v2(q);

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> v2[i];
        }

        set<int> st;

        for (int i = 0; i < q; i++) {
            if (st.count(v2[i])) {
                continue;
            }
            st.insert(v2[i]);
            for (int j = 0; j < n; j++) {
                if (v1[j] % (1 << v2[i]) == 0) {
                    v1[j] += (1 << (v2[i] - 1));
                }
            }
        }

        for (auto it : v1) cout << it << " ";
        cout << endl;
    }

    return 0;
}
