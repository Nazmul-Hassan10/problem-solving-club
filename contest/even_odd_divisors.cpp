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
        vector<int> even_v, odd_v;
        int n;
        cin >> n;

        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    even_v.push_back(i);
                }
                else
                {
                    odd_v.push_back(i);
                }

                if (i != n / i)
                {
                    if ((n / i) % 2 == 0)
                    {
                        even_v.push_back(n / i);
                    }
                    else
                    {
                        odd_v.push_back(n / i);
                    }
                }
            }
        }

                    int len_even = even_v.size();
            int len_odd = odd_v.size();

            if (len_even > len_odd)
            {
                cout << 1 << "\n";
            }
            else if (len_even == len_odd)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
    }

    return 0;
}