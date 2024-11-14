#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, h;
    cin >> n >> m >> h;
    vector<int> v(n), p(m);

    int max_v = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        max_v = max(max_v, v[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }

    return 0;
}