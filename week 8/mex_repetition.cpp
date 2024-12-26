#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n + 1, 0);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        long long missing_val = (n * (n + 1)) / 2 - sum;
        v[v.size() - 1] = missing_val;

        long long idx = (n * k) % (n + 1);
        vector<long long> v2(v.begin() + idx, v.end());
        v2.insert(v2.end(), v.begin(), v.begin() + idx);

        for (int i = 0; i < n; i++) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
