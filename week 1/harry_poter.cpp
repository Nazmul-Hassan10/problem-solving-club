#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        v.push_back(name);
    }
    
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] >= 2)
        {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}