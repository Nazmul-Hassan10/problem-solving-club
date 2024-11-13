#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int min_slice = 10 * n, max_slice = 12 * n;

    if (k % 10 == 1 || k % 10 == 0) {
        cout << k / 10 << endl;
    } else if (k % 10 == 2) {
        cout << k / 10 + 1 << endl;
    }

    // unsolved
    return 0;
}