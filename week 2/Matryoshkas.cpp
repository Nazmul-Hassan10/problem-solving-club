#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        sort(a.begin(), a.end());

        long long cnt = 0;

        for (int i = 0; i < n; i++) {
            if (freq[a[i]] > 0) {
                cnt++;
                int new_v = a[i];
                while (freq[new_v] > 0) {
                    freq[new_v]--;
                    new_v++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
