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
        vector<int> v;

        bool flag = true;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (flag) {
                if (x != 0 && x > 0) {
                    flag = false;
                    v.push_back(x);
                }
                continue;
            }
            v.push_back(x);
        }

        int k = v.size();
        for (int i = 0; i < k - 1; i++) {
            if (v[i] == 0) {
                sum++;
            } else {
                sum += v[i];
            }
        }

        // for (auto it : v) cout << it << " ";

        cout << sum << endl;
    }

    return 0;
}