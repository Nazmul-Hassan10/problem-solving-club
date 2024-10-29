#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int  multi = (((a + c) - 1) / c) * c;
    if (multi >= a && multi <= b){
        cout << multi << "\n";
    } else{
        cout << - 1 << "\n";
    }

    return 0;
}