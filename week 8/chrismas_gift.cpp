#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, l, w;
    cin >> h >> l >> w;
    int area = 2 * (h * l + h * w + w * l);
    cout << 1000 / area << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}