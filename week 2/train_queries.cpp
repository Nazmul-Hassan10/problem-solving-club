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
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 1; i <= m; i++)
        {
            int start, end;
            cin >> start >> end;
            if ((mp.find(start) == mp.end()) || (mp.find(end) == mp.end()))
            {
                cout << "NO" << '\n';
            }
            else
            {
                int lft, rht;
                lft = *mp[start].begin();
                rht = *mp[end].rbegin();
                if (lft < rht)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }

    return 0;
}