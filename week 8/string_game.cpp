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

        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        // cout << mp['1'];
        if (min(mp['1'], mp['0']) % 2 == 0) {
            cout << "Ramos" << endl;
        } else {
            cout << "Zlatan" << endl;
        }
    }

    return 0;
}