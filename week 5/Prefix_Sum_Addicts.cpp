#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> v1(k);
    for (int i = 0; i < k; i++) {
        cin >> v1[i];
    }

    if (n == 1 || k == 1) {
        cout << "Yes" << endl;
        return;
    }

    vector<long long> v2(n);
    int j = n - 1;
    for (int i = k - 1; i >= 1; i--) {
        v2[j] = v1[i] - v1[i - 1];
        j--;
    }

    while (j != 0) {
        v2[j] = v2[j + 1];
        v1[0] -= v2[j];
        j--;
    }
    v2[0] += v1[0];

    vector<long long> v3(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    if (v2 == v3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}