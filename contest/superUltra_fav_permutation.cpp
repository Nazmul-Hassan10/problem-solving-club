#include <bits/stdc++.h>
using namespace std;

// bool isCompos(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return true;
//     }
//     return false;
// }

void solve() {
    int n;
    cin >> n;

    if (n <= 3) {
        cout << -1 << '\n';
        return;
    }

    vector<int> permu;

    for (int i = n; i >= 1; i--) {
        if (i % 2 != 0) {
            permu.push_back(i);
        }
    }

    for (int i = n; i >= 1; i--) {
        if (i % 2 == 0) {
            permu.push_back(i);
        }
    }

    for (int num : permu) {
        cout << num << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
