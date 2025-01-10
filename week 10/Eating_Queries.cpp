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
        int n, q;
        cin >> n >> q;

        vector<int> v(n);
        for (auto& x : v) cin >> x;

        sort(rall(v));

        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + v[i];
        }

        for (int i = 0; i < q; i++) {
            int k;
            cin >> k;
            int l = 0, r = n, mid, ans = -1;
            while (l <= r) {
                mid = (l + r) / 2;
                if (k <= pref[mid]) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
