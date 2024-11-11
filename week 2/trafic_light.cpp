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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s = s + s;

        // cout << s << endl;

        int len_s = s.size();
        int max_time = INT_MIN;
        int last_g = -1;
        for (int i = len_s - 1; i >= 0; i--) {
            if (s[i] == 'g') {
                last_g = i;
            }
            if (s[i] == c) {
                int time = last_g - i;
                max_time = max(max_time, time);
            }
        }

        cout << max_time << endl;
    }

    return 0;
}