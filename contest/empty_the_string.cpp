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
        deque<char> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int opt = 0;
        while (s.size() > 1) {
            if (s.front() != s[1]) {
                s.pop_front();
                s.pop_front();
            } else {
                opt++;
                s.pop_front();
            }
        }
        cout << opt << '\n';
    }

    return 0;
}
