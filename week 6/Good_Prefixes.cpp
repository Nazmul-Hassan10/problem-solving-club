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
        long long cnt = 0, max_val = LLONG_MIN, sum = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;

            max_val = max(max_val, x);
            if (sum - max_val == max_val) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}