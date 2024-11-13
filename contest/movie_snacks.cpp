#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int popcorn = 2 * x, drinks = 3 * y;
    int special = (2 * z) + y;

    cout << min(popcorn + drinks, special);

    return 0;
}