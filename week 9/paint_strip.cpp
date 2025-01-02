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

        if (n == 1) {
            cout << 1 << "\n";
        } else if (n <= 4) {
            cout << 2 << "\n";
        } else {
            long long sum = 4;
            int ans = 2;

            while (sum < n) {
                sum = (sum + 1) * 2;
                ans++;
            }

            cout << ans << endl;
        }
    }

    return 0;
}
