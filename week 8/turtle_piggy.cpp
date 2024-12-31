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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        bool flag = true;
        while (v.size() > 1) {
            if (flag) {
                v.erase(v.begin());
                flag = false;
            } else {
                v.erase(v.end() - 1);
                flag = true;
            }
        }
        cout << *v.begin() << endl;
    }

    return 0;
}