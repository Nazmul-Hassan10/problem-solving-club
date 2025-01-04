#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    //
    return __gcd(a, b);
}

long long LCM(long long a, long long b) {
    //
    return (a / __gcd(a, b) * b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long cnt1 = (n / a) * p, cnt2 = (n / b) * q, overlp = (n / LCM(a, b));

    cout << (cnt1 + cnt2) - (overlp * (p + q)) + (overlp * max(p, q));
    return 0;
}