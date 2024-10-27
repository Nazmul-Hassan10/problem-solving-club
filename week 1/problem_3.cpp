#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();

    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string leaf;
        getline(cin, leaf);
        s.insert(leaf);
    }
    
    cout << s.size() << endl;
    return 0;
}