#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        if (n % 2 == 0) {
            int x_val, y_val;
            x_val = n * x;
            y_val = (n / 2) * y;

            cout << max(x_val, y_val) << endl;
        } else {
            int x_val = n * x;
            int y_val = ((n - 1) / 2) * y + x;
            cout << max(x_val, y_val) << endl;
        }
    }

    return 0;
}