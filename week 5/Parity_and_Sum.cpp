#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> evn, odd;
    long long mx_evn = LONG_MIN;
    long long mx_odd = LONG_MIN;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x % 2 == 0) {
            evn.push_back(x);
            mx_evn = max(mx_evn, x);
        } else {
            odd.push_back(x);
            mx_odd = max(mx_odd, x);
        }
    }

    if (evn.size() == 0 || odd.size() == 0) {
        cout << 0 << endl;
        return;
    }

    sort(evn.begin(), evn.end());
    sort(odd.begin(), odd.end());
    int cnt = 0;

    for (int i = 0; i < evn.size(); i++) {
        if (evn[i] > mx_odd) {
            cout << evn.size() + 1 << endl;
            return;
        } else {
            cnt++;
            mx_odd += evn[i];
        }
    }
    cout << cnt << endl;
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