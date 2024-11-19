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

        int cnt_0 = 0, cnt_1 = 0;

        if (s[0] == '1') {
            cnt_1 = 1;
        } else {
            cnt_0 = 1;
        }

        char first_val = s[0];
        int k = n - 1;
        int l = 1;
        while (k--) {
            if (s[l] != first_val) {
                if (s[l] == '1')
                    cnt_1++;
                else
                    cnt_0++;
                first_val = s[l];
            }
            l++;
        }

        cout << min(cnt_0, cnt_1) << endl;
    }

    return 0;
}
