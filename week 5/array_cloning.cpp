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
        int max_count = 0;
        int max_el = -1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
            if (mp[v[i]] > max_count) {
                max_count = mp[v[i]];
                max_el = v[i];
            }
        }
        sort(v.begin(), v.end());

        int opt = 0;
        while (max_count < n) {
            opt++;

            if (n - max_count >= max_count) {
                opt += max_count;
                max_count *= 2;
            } else {
                opt += n - max_count;
                max_count = n;
            }
        }
        cout << opt << endl;
    }

    return 0;
}