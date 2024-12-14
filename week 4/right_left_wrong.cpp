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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        int l = 0, r = n - 1;
        long long sum = 0;

        while (l < n && s[l] != 'L') l++;
        while (r >= 0 && s[r] != 'R') r--;

        vector<long long> preSum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            preSum[i + 1] = preSum[i] + a[i];
        }

        while (l < r) {
            if (s[l] == 'L' && s[r] == 'R') {
                sum += preSum[r + 1] - preSum[l];

                l++;
                r--;
            }

            while (l < r && s[l] != 'L') l++;
            while (l < r && s[r] != 'R') r--;
        }

        cout << sum << endl;
    }

    return 0;
}
