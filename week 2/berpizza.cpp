#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<pair<int, int>> st;
    multiset<pair<int, int>> ml;
    vector<int> ans;

    int customer = 1;
    for (int i = 1; i <= n; i++)
    {
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            int money;
            cin >> money;

            st.insert({customer, money});
            ml.insert({money, -customer});
            customer++;
        }
        else if (opt == 2)
        {
            int pos = st.begin()->first;
            int money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            ml.erase({money, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second;
            int money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos, money});
        }
    }

    for (int val : ans)
        cout << val << " ";
    cout << endl;
    return 0;
}