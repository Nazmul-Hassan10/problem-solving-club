#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int target = v.size() - 2;

    unordered_set<int> st;
    int a = -1, b = -1;

    for (int num : v) {
        if (num != 0 && target % num == 0) {
            int x = target / num;
            if (st.find(x) != st.end()) {
                a = num;
                b = x;
                break;
            }
        }
        st.insert(num);
    }

    if (a != -1 && b != -1) {
        cout << a << " " << b << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
