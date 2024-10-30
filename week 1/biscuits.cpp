#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, t;
    cin >> a >> b >> t;
    
    int total_biscuits = 0;
    int time = a;

    while (time <= t) {
        total_biscuits += b;
        time += a;
    }

    cout << total_biscuits << endl;
    return 0;
}