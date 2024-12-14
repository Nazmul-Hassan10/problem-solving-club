#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;

        int special = ceil((h - y) / (double)x) + 1;
        int non_special = ceil(h / (double)x);
        // cout << special << " " << non_special << endl;

        cout << min(special, non_special) << endl;
    }

    return 0;
}