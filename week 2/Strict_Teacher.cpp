#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teacher(m);
        for (int i = 0; i < m; i++) {
            cin >> teacher[i];
        }

        vector<int> queries(q);
        for (int i = 0; i < q; ++i) {
            cin >> queries[i];
        }

        sort(teacher.begin(), teacher.end());

        for (int i = 0; i < q; ++i) {
            int david = queries[i];

            if (david < teacher[0]) {
                cout << teacher[0] - 1 << endl;

            } else if (david > teacher.back()) {
                cout << n - teacher.back() << endl;

            } else {
                auto it = upper_bound(teacher.begin(), teacher.end(), david);
                int dis1 = 0, dis2 = 0;

                if (it != teacher.end()) {
                    dis1 = *it;
                }
                if (it != teacher.begin()) {
                    dis2 = *(--it);
                }

                cout << abs(dis1 - dis2) / 2 << endl;
            }
        }
    }

    return 0;
}