#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cnt_tuesday = 0;
        for (int i = 0; i < n; i++){ 
            if ((1 + i) % 7 == 2){ 
                cnt_tuesday++; 
            }
        }
        cout << cnt_tuesday << endl;
    }

    
    return 0;
}