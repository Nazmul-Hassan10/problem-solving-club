#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> v;
        bool zero = false, one = false;
        for (char c : s) {
            if (c == '0') {
                zero = true;
            }
            if (c == '1') {
                one = true;
            }
            if (zero && one) {
                break;
            }
        }

        if (zero && one) {
            v.push_back(1);
        } else {
            v.push_back(n);
        }

        for (auto it : v) {
            cout << it << endl;
        }
    }
    return 0;
}