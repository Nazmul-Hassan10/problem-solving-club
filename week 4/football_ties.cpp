#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int x_point = x % 3;
        int y_point = y % 3;

        int d = max(x_point, y_point);

        cout << d << endl;
    }

    return 0;
}
