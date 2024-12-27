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

        set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(s[i]);
        }

        int ans = INT_MAX;
        for (auto it : st) {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else {
                    if (s[l] == it) {
                        l++;
                        cnt++;
                    } else if (s[r] == it) {
                        r--;
                        cnt++;
                    } else {
                        cnt = INT_MAX;
                        break;
                    }
                }
            }
            ans = min(ans, cnt);
        }
        cout << (ans == INT_MAX ? -1 : ans) << endl;
    }

    return 0;
}