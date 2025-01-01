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
        vector<long long> v(n);
        for (long long i = 0; i < n; ++i) {
            cin >> v[i];
        }

        long long ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += abs(v[i]);
            v[i + 1] += v[i];
        }

        cout << ans << endl;
    }

    return 0;
}