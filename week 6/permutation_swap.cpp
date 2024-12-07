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

        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++) cin >> v[i];

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = __gcd(abs(v[i] - i), ans);
        }

        cout << ans << endl;
    }

    return 0;
}