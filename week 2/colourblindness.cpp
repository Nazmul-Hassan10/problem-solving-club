#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    cin >> p;
    while (p--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'G' && t[i] == 'B')
            {
                t[i] = 'G';
            }
            else if (s[i] == 'B' && t[i] == 'G')
            {
                t[i] = 'B';
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}