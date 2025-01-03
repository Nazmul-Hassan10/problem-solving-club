#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long m_n = LONG_MAX;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < (1 << n); i++) {
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum1 += v[j];
            } else {
                sum2 += v[j];
            }
        }
        m_n = min(m_n, abs(sum1 - sum2));
    }

    cout << m_n << endl;

    return 0;
}