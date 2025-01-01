#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        for (long long i = 0; i < n; i++) {
            if (i % 2 != 0) {
                for (long long j = n - 1; j >= 0; j--) {
                    cout << j << " ";
                }
            } else {
                for (long long j = 0; j < n; j++) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}