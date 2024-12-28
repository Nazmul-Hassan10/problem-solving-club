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
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'N') {
                sum++;
            } else if (s[i] == 'E') {
                sum++;
            } else if (s[i] == 'S') {
                sum--;
            } else if (s[i] == 'W') {
                sum--;
            }
        }
        // cout << sum << endl;
        sum /= 2;
        }

    return 0;
}