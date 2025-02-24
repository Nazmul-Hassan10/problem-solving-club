#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        deque<long long> v;
        for (int k = 0; k <= __lg(n); k++) {
            if ((n >> k) & 1) {
                long long value = n - (1LL << k);
                if (value > 0) {
                    v.push_front(value);
                }
            }
        }

        v.push_back(n);
        cout << v.size() << endl;

        for (auto it : v) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}