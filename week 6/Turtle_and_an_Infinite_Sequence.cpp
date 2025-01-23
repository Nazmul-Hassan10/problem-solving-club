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
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll l = max(n - m, 0LL);
        ll r = n + m;
        ll ans = 0;

        for (int i = 0; i < 32; i++) {
            ll col = r / (1LL << i);
            if (col % 2) {
                ans |= 1LL << i;
                continue;
            }
            if (l == 0) {
                if (col) ans |= 1LL << i;
                continue;
            }
            ll col2 = l / (1LL << i);
            if (col != col2) ans |= 1LL << i;
        }

        cout << ans << endl;
    }
    return 0;
}