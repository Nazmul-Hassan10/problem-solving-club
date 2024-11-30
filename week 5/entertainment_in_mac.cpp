#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string s1 = s;
    reverse(s1.begin(), s1.end());

    if (s <= s1) {
        cout << s << endl;
    } else {
        cout << s1 << s << endl;
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