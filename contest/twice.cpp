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
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        int cnt = 0;
        for (auto it : mp) {
            cnt += it.second / 2;
        }
        cout << cnt << endl;
    }

    return 0;
}
