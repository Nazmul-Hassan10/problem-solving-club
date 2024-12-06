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

        vector<pair<int, int>> swaps;
        int l = 2, r = 3 * n;

        while (l < r) {
            swaps.push_back({l, r});
            l += 3;
            r -= 3;
        }

        cout << swaps.size() << endl;
        for (auto [i, j] : swaps) {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}
