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
            v[i] = i + 1;
        }

        deque<int> final_v;
        int q = n - 1;
        while (q--) {
            if (v.size() == 1) {
                break;
            }

            float a = v[v.size() - 2], b = v[v.size() - 1];
            int c = ceil((a + b) / 2);

            int p1 = v.back();
            v.pop_back();
            int p2 = v.back();
            v.pop_back();

            final_v.push_back(p2);
            final_v.push_back(p1);

            v.push_back(c);
        }

        cout << v[0] << endl;

        // for (auto i : final_v) cout << i << " ";

        while (final_v.size() > 1) {
            int f1 = final_v.front();
            final_v.pop_front();
            int f2 = final_v.front();
            final_v.pop_front();

            cout << f2 << " " << f1 << endl;
        }
    }

    return 0;
}
