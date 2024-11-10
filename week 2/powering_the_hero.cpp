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

        priority_queue<int> bonus;
        long long hero_total = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                if (!bonus.empty()) {
                    hero_total += bonus.top();
                    bonus.pop();
                }
            } else {
                bonus.push(v[i]);
            }
        }

        cout << hero_total << endl;
    }

    return 0;
}