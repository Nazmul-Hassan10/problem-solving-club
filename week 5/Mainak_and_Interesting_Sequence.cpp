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

        if (n > m) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> v(n, 1);

        int div;
        if (n % 2 == 1) {
            v[n - 1] = m - (n - 1);
        } else {
            int minus = m - (n - 2);

            if (minus % 2 == 0) {
                div = minus / 2;
                v[n - 2] = div;
                v[n - 1] = div;
            } else {
                cout << "NO" << endl;
                continue;
            }
        }

        cout << "YES" << endl;
        for (auto it : v) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
