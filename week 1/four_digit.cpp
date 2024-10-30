#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    string x = to_string(n);
    int len_x = x.size();

    for (int i = 0; i < 4 - len_x; i++)
    {
        x.insert(0, "0");
    }

    cout << x;
    
    return 0;
}