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
        string s, p;
        cin >> s >> p;

        int sum_1 = 0, sum_2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                sum_1++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (p[i] == '1') {
                sum_2++;
            }
        }

        int abs_val = abs(sum_1 - sum_2);

        if (abs_val % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}