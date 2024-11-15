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
        deque<int> dq(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> dq[i];
            // mp[dq[i]]++;
        }
        set<int> st;
        int cnt = n;
        // for (int i = 0; i < dq.size();) {
        //     if (mp[dq[i]] > 1) {
        //         int k = i + 1;
        //         while (k--) {
        //             mp[dq[i]]--;
        //             dq.pop_front();
        //             cnt++;
        //         }
        //         i = 0;
        //     } else {
        //         i++;
        //     }
        // }

        for (int i = n - 1; i >= 0; i--) {
            if (st.count(dq[i])) {
                break;
            }
            st.insert(dq[i]);
            cnt--;
        }

        cout << cnt << endl;
        // for (auto it : dq) cout << it << " ";
    }

    return 0;
}