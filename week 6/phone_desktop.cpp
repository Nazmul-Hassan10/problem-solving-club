#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        int extra_scr = ceil(float(a / 15.0));
        cout << extra_scr << endl;
        return;
    }

    int for_b = ceil((b / 2.0));
    int need_scr_b = (15 * for_b) - b * 4;

    if (need_scr_b <= a) {
        int extra_scr = for_b + ceil(float((a - need_scr_b) / 15.0));
        cout << extra_scr << endl;
    } else {
        cout << for_b << endl;
    }

    // cout << for_b;
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