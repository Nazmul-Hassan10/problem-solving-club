#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float x, y, z;
    cin >> x >> y >> z;

    float my_team = x + y * 0.5;
    float other_team = y * 0.5 + z;

    if (my_team + (4 - (x + y + z)) > other_team) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // cout << my_team + (4 - (x + y + z));

    return 0;
}