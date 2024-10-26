#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sereja = 0, dima = 0;

    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (l <= r)
        {
            int max_value = max(v[l], v[r]);
            sereja += max_value;
            if (max_value == v[r])
            {
                r--;
            } else l++;
        }
        
        if (l <= r)
        {
            int max_value = max(v[l], v[r]);
            dima += max_value;
            if (max_value == v[r])
            {
                r--;
            } else l++;
        }
        
    }
    cout << sereja << " " << dima << endl;
    

    return 0;
}