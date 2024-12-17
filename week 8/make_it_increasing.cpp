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

        int cnt = 0;
        bool flag = true;
        for (int i = n - 1; i > 0; i--) {
            if (v[i] == 0) {
                cout << -1 << endl;
                flag = false;
                break;
            }

            while (v[i] <= v[i - 1] && v[i - 1] > 0) {
                v[i - 1] /= 2;
                cnt++;
            }
        }

        if (flag) {
            cout << cnt << endl;
        }
    }

    return 0;
}
