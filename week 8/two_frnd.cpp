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

        int ans = 3;
        for (int i = 0; i < n; i++) {
            if (v[v[i] - 1] == i + 1) {
                ans = 2;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
