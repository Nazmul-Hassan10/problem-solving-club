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
        for (char &i : v)
            cin >> i;

        int first_ind_B = 0;
        int last_ind_B = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 'B')
            {
                last_ind_B = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 'B')
            {
                first_ind_B = i;
                break;
            }
        }

        int ans = (last_ind_B - first_ind_B) + 1;
        cout << ans << endl;
    }

    return 0;
}