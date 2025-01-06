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

        vector<int> ans(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += v[j];
                if (sum <= n) {
                    ans[sum]++;
                } else {
                    break;
                }
            }
        }

        for (auto it : ans)
            if (it != 0) cout << it << " ";
        cout << endl;
    }

    return 0;
}