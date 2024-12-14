#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int intake = y * z;

    if (intake <= x) {
        cout << x - intake << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}