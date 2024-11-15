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
        string s;
        cin >> s;

        long long cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                cnt += ((n - 1) - i);
            }
            if (s[i] == 'L') {
                cnt += i;
            }
        }

        priority_queue<long long> pq;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                long long before = i;
                long long after = ((n - 1) - i);
                pq.push(after - before);
            } else {
                long long before = ((n - 1) - i);
                long long after = i;
                pq.push(after - before);
            }
        }

        for (int i = 0; i < n; i++) {
            long long pq_t = pq.top();
            if (pq_t > 0) cnt += pq_t;
            cout << cnt << " ";
            pq.pop();
        }

        // cout << cnt << endl;
        cout << endl;
    }

    return 0;
}