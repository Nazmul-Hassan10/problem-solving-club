#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    unordered_map<string, int> mp;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (mp[s] == 0) {
            cout << "OK" << endl;
            mp[s] = 1;
        } else {
            cout << s + to_string(mp[s]) << endl;
            mp[s + to_string(mp[s])] = 1;
            mp[s]++;
        }
    }
    
    // first -> ok
    // first -> first1
    // first -> first2
    // second
    // second
    // third
    // third
    return 0;
}
