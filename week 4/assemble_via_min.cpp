#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b_sz = (n * (n - 1)) / 2;

        vector<int> b(b_sz);
        for (int i = 0; i < b_sz; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a;
        int idx = 0;
        for (int i = 1; i < n; i++) {
            a.push_back(b[idx]);
            idx += (n - i);
        }

        a.push_back(b.back());
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
