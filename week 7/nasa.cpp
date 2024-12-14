#include <bits/stdc++.h>
using namespace std;
const int maxN = (1LL << 15);

vector<int> allpalindrome;
bool isPalindrome(int x) {
    string s = to_string(x);
    int len_s = s.size();
    for (int i = 0; i < len_s / 2; i++) {
        if (s[i] != s[len_s - i - 1]) {
            return false;
        }
    }
    return true;
}

void markPalindrome() {
    for (int i = 0; i < maxN; i++) {
        if (isPalindrome(i)) {
            allpalindrome.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    markPalindrome();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), cnt(maxN + 1);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            cnt[v[i]]++;
        }

        long long ans = n;
        for (int i = 0; i < n; i++) {
            int sz = allpalindrome.size();

            for (int j = 0; j < sz; j++) {
                int curr = (v[i] ^ allpalindrome[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << endl;
    }
    return 0;
}