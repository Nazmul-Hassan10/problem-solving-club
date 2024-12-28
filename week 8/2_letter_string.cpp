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

        map<string, int> freq;
        long long ans = 0;

        while (n--) {
            string s;
            cin >> s;
            for (char ch = 'a'; ch <= 'k'; ch++) {
                if (ch != s[0]) {
                    string md = s;
                    md[0] = ch;
                    ans += freq[md];
                }
            }

            for (char ch = 'a'; ch <= 'k'; ch++) {
                if (ch != s[1]) {
                    string md = s;
                    md[1] = ch;
                    ans += freq[md];
                }
            }
            freq[s]++;
        }

        cout << ans << endl;
    }

    return 0;
}
