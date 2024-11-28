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
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long sec_last = v[n - 2];
        for (int i = 0; i < n - 2; i++) {
            long long minus = sec_last - v[i];
            sec_last = minus;
        }
        cout << v[n - 1] - sec_last << endl;
    }

    return 0;
}