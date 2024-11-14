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
        vector<int> v(n);

        int min_v, max_v;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            // min_v = min(min_v, v[i]);
            // max_v = max(max_v, v[i]);
        }

        sort(v.begin(), v.end());

        int opt1 = v[n - 1] - v[0];
        int opt2 = v[n - 3] - v[0];
        int opt3 = v[n - 1] - v[2];
        int opt4 = v[n - 2] - v[1];

        min_v = min({opt1, opt2, opt3, opt4});
        cout << min_v << endl;
    }

    return 0;
}