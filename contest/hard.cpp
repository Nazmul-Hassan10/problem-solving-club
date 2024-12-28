#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int ap, bp, cp, rem_sit, m1 = m, m2 = m;
        ap = min(a, m);
        bp = min(b, m);
        rem_sit = (2 * m) - (ap + bp);
        cp = min(c, rem_sit);

        cout << ap + bp + cp << endl;
    }

    return 0;
}