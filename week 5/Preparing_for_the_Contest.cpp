#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // vector<int> v(n);
        for (int i = n - k; i > 0; i--) {
            cout << i << " ";
        }
        for (int i = (n - k) + 1; i <= n; i++) {
            cout << i << " ";
        }
    }

    return 0;
}