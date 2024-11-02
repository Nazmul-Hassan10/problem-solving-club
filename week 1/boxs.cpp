#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }
    
    // for(auto it : freq) cout << it.second << endl;

    int max_freq = 0;
    for (auto it : freq) {
        max_freq = max(max_freq, it.second);
    }
    
    cout << max_freq << endl;
    
    return 0;
}
