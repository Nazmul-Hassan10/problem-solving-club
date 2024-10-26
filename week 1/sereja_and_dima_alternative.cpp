#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sereja = 0, dima = 0, l = 0, r = n - 1;
    bool turn = true;

    while (l <= r) {
        int max_value = (v[l] > v[r]) ? v[l++] : v[r--];
        if (turn) sereja += max_value;
        else dima += max_value;
        turn = !turn;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
