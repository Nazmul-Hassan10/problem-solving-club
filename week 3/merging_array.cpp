#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(m);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    vector<int> v3;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (v1[i] <= v2[j]) {
            v3.push_back(v1[i]);
            i++;
        } else {
            v3.push_back(v2[j]);
            j++;
        }
    }

    while (i < n) {
        v3.push_back(v1[i]);
        i++;
    }

    while (j < m) {
        v3.push_back(v2[j]);
        j++;
    }

    for (auto it : v3) cout << it << " ";
    cout << endl;

    return 0;
}