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
        long long zero = 1, one = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 1) {
                one++;
            } else if (v[i] == 0) {
                zero = zero * 2;
            }
        }
        long long ans = zero * one;
        cout << ans << endl;
    }

    return 0;
}