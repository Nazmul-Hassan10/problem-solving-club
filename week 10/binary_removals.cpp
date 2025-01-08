#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

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
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        reverse(all(s));
        ll cnt_0 = 0, inver = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cnt_0++;
            } else {
                inver += cnt_0;
            }
        }

        // cout << "--> " << inver << endl;

        if (inver <= x && inver % k == 0) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}
