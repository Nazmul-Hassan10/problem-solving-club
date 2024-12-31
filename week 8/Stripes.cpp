#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        bool flag = false;
        for (int i = 0; i < 8; i++) {
            string s;
            cin >> s;
            if (s == "RRRRRRRR") {
                flag = true;
            }
        }
        if (!flag)
            cout << 'B' << endl;
        else
            cout << 'R' << endl;
    }

    return 0;
}