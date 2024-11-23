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
        string s;
        cin >> s;

        vector<char> v;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                v.push_back('a' + num - 1);
                i -= 2;
            } else {
                v.push_back('a' + (s[i] - '0') - 1);
            }
        }

        reverse(v.begin(), v.end());

        for (auto it : v) cout << it;
        cout << endl;
    }

    return 0;
}
