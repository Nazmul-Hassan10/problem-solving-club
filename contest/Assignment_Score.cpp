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
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        int total_marks = (n + 1) * 100;
        float half_of_total = float(total_marks) * 0.5;

        if (half_of_total >= sum && half_of_total - sum <= 100) {
            cout << half_of_total - float(sum) << endl;
        } else if (half_of_total < sum) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}