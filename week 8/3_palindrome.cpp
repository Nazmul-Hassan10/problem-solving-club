#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;

    string t = "aabb";
    for (int i = 0; i < n; ++i) {
        s += t[i % 4];
    }

    cout << s << endl;

    return 0;
}