#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s = "Timur";
    sort(s.begin(), s.end());

    string t;
    cin >> t;

    sort(t.begin(), t.end());

    if (t.size() != s.size())
    {
        cout << "NO" << endl;
        return;
    }

    bool ans = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            ans = false;
        }
    }

    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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