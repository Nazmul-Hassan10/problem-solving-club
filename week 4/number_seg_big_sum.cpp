#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long l = 0, r = 0, ans = 0;
    long long sum = 0;
    while (r < n) {
        sum += v[r];

        while (sum >= k) {
            ans += (n - r);
            sum -= v[l];
            l++;
        }
        r++;
    }

    // cout << sum << endl;
    cout << ans << endl;

    return 0;
}