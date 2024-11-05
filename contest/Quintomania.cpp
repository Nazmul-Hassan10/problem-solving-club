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
        vector<int> ml(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ml[i];
        }

        bool perfect = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(ml[i] - ml[i + 1]) == 5 || abs(ml[i] - ml[i + 1]) == 7)
            {
                perfect = true;
            } else{
                perfect = false;
                break;
            }
        }

        if (perfect)
        {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    
    
    return 0;
}