#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string t = s;

        int zero_cnt = 0, one_cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                one_cnt++;
            }
            if (s[i] == '0') {
                zero_cnt++;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (zero_cnt != 0) {
                    zero_cnt--;
                } else {
                    break;
                }
            }
            if (s[i] == '0') {
                if (one_cnt != 0) {
                    one_cnt--;
                } else {
                    break;
                }
            }
        }
        cout << zero_cnt + one_cnt << endl;
    }

    return 0;
}