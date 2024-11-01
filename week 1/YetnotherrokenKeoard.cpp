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
        int len_s = s.size();

        int lower = 0, upper = 0;

        deque<char> d;

        for (int i = len_s - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                upper++;
                continue;
            }
            if (s[i] == 'b')
            {
                lower++;
                continue;
            }
            if (upper && isupper(s[i]))
            {
                upper--;
                continue;
            }
            if (lower && islower(s[i]))
            {
                lower--;
                continue;
            }
            d.push_front(s[i]);
        }
        for(auto &it : d) cout << it;
        cout << "\n";
            
    }
    return 0;
}