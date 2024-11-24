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
        vector<int> v(n);
        map<char, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            for (char j = 'a'; j <= 'z'; j++) {
                if (mp[j] == v[i]) {
                    cout << j;
                    mp[j]++;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
