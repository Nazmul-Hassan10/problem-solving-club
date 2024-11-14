#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<string> dq(n);

    for (int i = 0; i < n; i++) {
        cin >> dq[i];
    }

    reverse(all(dq));

    map<string, int> mp;
    vector<string> v;

    for (int i = 0; i < n; i++) {
        mp[dq[i]]++;
        if (mp[dq[i]] > 1) {
            continue;
        }
        v.push_back(dq[i]);
    }

    for (string s : v) {
        cout << s[s.size() - 2] << s[s.size() - 1];
    }

    return 0;
}