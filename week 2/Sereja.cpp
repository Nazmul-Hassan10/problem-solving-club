#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> cnt(n);
    map<int, int> element_map;

    int distinct = 0;
    for (int i = n - 1; i >= 0; i--) {

        if (element_map[v[i]] == 0) {
            distinct++;
        }

        element_map[v[i]]++;
        cnt[i] = distinct;
    }

    while (m--) {
        int q;
        cin >> q;
        cout << cnt[q - 1] << endl;
    }
    
    return 0;
}
