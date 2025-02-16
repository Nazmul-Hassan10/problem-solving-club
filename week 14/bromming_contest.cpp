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
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool allZero = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            allZero = false;
            break;
        }
    }

    bool allOne = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != '1') {
            allOne = false;
            break;
        }
    }

    if (allZero) {
        cout << 0 << endl;
        return;
    } else if (allOne) {
        cout << 1 << endl;
        return;
    } else {
        int one_zero = 0, one_one = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) {
                one_zero++;
            }
        }

        int ans = 2 * one_zero;
        if (s[n - 1] == '1') {
            ans -= 1;
        }

        cout << ans << endl;
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
