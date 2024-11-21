#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int i = 0;
        long long cnt = 0;
        while (b != 0) {
            if (i < n && b == 1) {
                b = min(b + v[i], a);
                i++;
            }
            if (b != 1) {
                long long c = (b - 1);
                b -= b - 1;
                cnt += c;
            } else {
                b--;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}