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
        vector<int> v;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x != 0) {
                v.push_back(x);
            }
            sum += abs(x);
        }

        int optn = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < 0) {
                optn++;
                while (i < v.size() && v[i] < 0) i++;
            }
        }

        cout << sum << " " << optn << endl;
    }

    return 0;
}
