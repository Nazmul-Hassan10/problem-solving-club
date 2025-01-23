#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

template <typename T>
void debug(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << endl;
}

template <typename T>
T GCD(T a, T b) {
    return __gcd(a, b);
}

template <typename T>
T LCM(T a, T b) {
    return (a / __gcd(a, b) * b);
}

template <typename T>
bool isPrime(T n) {
    if (n <= 1) return false;
    for (T i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

/*kaede senpai*/

int cnt_all_a3() {
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int f1 = a1 + a2, f2 = a4 - a2, f3 = a5 - a4;

    int cnt_1 = (f1 == a1 + a2) + (a4 == a2 + f1) + (a5 == f1 + a4);
    int cnt_2 = (f2 == a1 + a2) + (a4 == a2 + f2) + (a5 == f2 + a4);
    int cnt_3 = (f3 == a1 + a2) + (a4 == a2 + f3) + (a5 == f3 + a4);

    int ans = 0;

    return ans = max({cnt_1, cnt_2, cnt_3});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cout << cnt_all_a3() << endl;
    }

    return 0;
}
