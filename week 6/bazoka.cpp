#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    deque<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (is_sorted(v.begin(), v.end())) {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        int a = v.front();
        v.pop_front();
        v.push_back(a);
        if (is_sorted(v.begin(), v.end())) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

    // cout << endl;
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