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
        vector<long long> v(3);
        long long sum = 0;

        for (int i = 0; i < 3; i++) {
            cin >> v[i];
            sum += v[i];
        }

        int full_day = n / sum;
        int rem = n - (full_day * sum);
        int ans = 3 * full_day;

        if (rem > 0) {
            for (int i = 0; i < 3; ++i) {
                rem -= v[i];
                ans += 1;
                if (rem <= 0) {
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
