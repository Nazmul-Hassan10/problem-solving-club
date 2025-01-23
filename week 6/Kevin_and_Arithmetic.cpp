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
        int n;
        cin >> n;

        vector<int> ev, od;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                ev.push_back(x);
            } else {
                od.push_back(x);
            }
        }

        sort(ev.rbegin(), ev.rend());

        ll s = 0, point = 0;

        for (int x : ev) {
            s += x;
            if ((s & 1) == 0) {
                point++;
                while ((s & 1) == 0) {
                    s >>= 1;
                }
            }
        }

        for (int x : od) {
            s += x;
            if ((s & 1) == 0) {
                point++;
                while ((s & 1) == 0) {
                    s >>= 1;
                }
            }
        }

        cout << point << endl;
    }

    return 0;
}
