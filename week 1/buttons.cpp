#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    int max_ab = max(a, b);

    if (a == b)
    {
        cout << a + b << "\n";
    } else{
        int ans = max_ab + (max_ab - 1);
        cout << ans << "\n";
    }    

    return 0;
}