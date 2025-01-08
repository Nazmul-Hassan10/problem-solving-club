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
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int cnt_1 = 0;
        int one_1 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1' || b[i] == '1') {
                cnt_1++;
                if ((a[i] == '1' && b[i] == '0') ||
                    (a[i] == '0' && b[i] == '1')) {
                    one_1++;
                }
            }
        }

        if (cnt_1 % 2 == 1 || one_1 > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
