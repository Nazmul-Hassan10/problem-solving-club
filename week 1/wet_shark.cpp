#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<long long> num(n);

    long long sum = 0;
    long long min_odd = INT_MAX;

    for (int i = 0; i < n; ++i) {
        cin >> num[i];
        sum += num[i];

        if (num[i] % 2 != 0) {
            min_odd = min(min_odd, num[i]);
        }
    }

    if (sum % 2 != 0) {
        sum -= min_odd;
    }

    cout << sum;
    return 0;
}