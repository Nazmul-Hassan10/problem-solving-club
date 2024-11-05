#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> cost;

        for (int i = 0; i < k; i++) {
            int bi, ci;
            cin >> bi >> ci;
            cost.push_back(ci);
        }

        sort(cost.begin(), cost.end(), greater<int>());
        
        // for(auto it : cost) cout << it << " ";

        int len_cost = cost.size();
        int n_or_bottle = min(n, len_cost);
        int sum = 0;
        
        for (int i = 0; i < n_or_bottle; i++) {
            sum += cost[i];
        }

        cout << sum << endl;
    }

    return 0;
}
