#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'U')
            {
                if (v[i] < 0)
                {
                    v[i] = 9;
                }
                v[i]--;
            }
            else if (c == 'D')
            {
                if (v[i] > 9)
                {
                    v[i] = 0;
                }
                v[i]++;
            }
        }
    }
    for (int i : v)
    {
        if (i < 0)
        {
            i = 9;
        }
        else if (i > 9)
        {
            i = 0;
        }
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}