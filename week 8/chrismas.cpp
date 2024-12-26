#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v = {1, 2, 4};

    int cnt = 0, t = 0;

    for (int i = 0; i < 3; i++) {
        if (v[i] + t <= n) {
            t += v[i];
            cnt++;
        } else {
            break;
        }
    }

    cout << cnt << endl;
    return 0;
}