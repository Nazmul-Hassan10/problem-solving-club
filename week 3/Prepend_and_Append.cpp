#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    deque<char> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    while (true) {
        if ((s[0] == '1' && s[s.size() - 1] == '0') ||
            (s[0] == '0' && s[s.size() - 1] == '1')) {
            if (s.size() == 2) {
                cout << 0 << endl;
                return;
            }

            s.pop_front();
            s.pop_back();

        } else {
            if (s.size() > 0) {
                cout << s.size() << " " << endl;
            } else {
                cout << 0 << endl;
            }

            return;
        }
    }
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