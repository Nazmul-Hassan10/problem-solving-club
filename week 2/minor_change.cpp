#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s;

    int count_change = 0;
    t.resize(s.size());
    for (int i = 0; i < s.size(); i++)
    {
        char a;
        cin >> a;
        if (a != s[i])
        {
            count_change++;
        }
        t[i] = a;
    }

    cout << t << endl;
    cout << count_change;
    return 0;
}