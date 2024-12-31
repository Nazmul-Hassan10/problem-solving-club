#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        // int n;
        // cin >> n;

        int x, y, k;
        cin >> x >> y >> k;

        int l = 0;
        while (k--) {
            int gc = gcd(x, y);
            int lc = lcm(x, y);
            if (l % 2 == 0) {
                if (x > y) {
                    x = gc;
                } else {
                    y = gc;
                }
            } else {
                if (x < y) {
                    x = lc;
                } else {
                    y = lc;
                }
            }
        }
        cout << x + y << endl;
    }

    return 0;
}