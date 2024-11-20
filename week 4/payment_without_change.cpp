#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int max_coins = INT_MIN;

        if (s / n < a) {
            max_coins = s / n;
        } else {
            max_coins = a;
        }

        int needed_coint = s - (max_coins * n);

        if (needed_coint <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}