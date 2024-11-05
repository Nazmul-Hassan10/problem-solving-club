#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> contest(n);
    for (int i = 0; i < n; i++)
    {
        cin >> contest[i];
    }
    
    sort(contest.begin(), contest.end());


    int count_day = 0;
    int day = 1;
    for (int i = 0; i < n; i++)
    {
        if (day <= contest[i])
        {
            count_day++;
            day++;
        }
    }
    


    cout << count_day << endl;

    return 0;
}