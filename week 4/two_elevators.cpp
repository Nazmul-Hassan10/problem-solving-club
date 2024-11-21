#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int ele_one, ele_two;

        ele_one = abs(a - 1);
        ele_two = abs(c - 1) + abs(b - c);

        if (ele_one < ele_two) {
            cout << 1 << endl;
        } else if (ele_one > ele_two) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}