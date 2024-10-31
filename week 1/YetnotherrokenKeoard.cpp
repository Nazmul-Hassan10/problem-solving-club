#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                s.erase(i, 1);
                i--;
                for (int j = i; j >= 0; j--)
                {
                    if (s[j] >= 'A' && s[j] <= 'Z')
                    {
                        s.erase(j, 1);
                        i--;
                        break;
                    }
                }
            } else if (s[i] == 'b') {
                s.erase(i, 1);
                i--;
                for (int j = i; j >= 0; j--)
                {
                    if (s[j] >= 'a' && s[j] <= 'z')
                    {
                        s.erase(j, 1);
                        i--;
                        break;
                    }
                }
            }
        }

        cout << s << endl;
    }
    
    
    return 0;
}