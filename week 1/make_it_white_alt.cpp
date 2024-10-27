#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v(n);
        for (char &i : v) cin >> i;

        int first_ind_B = -1, last_ind_B = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 'B')
            {
                if (first_ind_B == -1) first_ind_B = i;
                last_ind_B = i;
            }
        }

        int ans = (last_ind_B - first_ind_B) + 1;
        cout << ans << endl;
    }

    return 0;
}
