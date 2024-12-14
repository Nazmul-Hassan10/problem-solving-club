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

        string s, p;
        cin >> s >> p;

        bool flag = false, fg = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                flag = true;
            }
            if (s[i] == '0' && p[i] == '1' && flag == false) {
                cout << "NO" << endl;
                fg = false;
                break;
            }
        }

        if (fg) {
            cout << "YES" << endl;
        }
    }
    return 0;
}