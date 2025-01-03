#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s;
    t = s;

    bool flag = true;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (t[i] != s[s.size() - 1 - i]) {
            flag = false;
            break;
        }
    }

    deque<char> v;
    vector<char> v1, x;
    if (flag) {
        cout << s << endl;
    } else {
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        int odd_count = 0;
        for (auto [ch, count] : mp) {
            if (count % 2 != 0) {
                odd_count++;
            }
        }

        if (odd_count > 1) {
            cout << "NO SOLUTION" << endl;
            return;
        }

        for (char ch = 'A'; ch <= 'Z'; ch++) {
            if (mp[ch] % 2 == 0) {
                for (int i = 0; i < mp[ch] / 2; i++) {
                    v1.push_back(ch);
                }
                for (int i = 0; i < mp[ch] / 2; i++) {
                    v.push_front(ch);
                }
            } else {
                for (int i = 0; i < mp[ch] / 2; i++) {
                    v1.push_back(ch);
                }
                x.push_back(ch);
                for (int i = 0; i < mp[ch] / 2; i++) {
                    v.push_front(ch);
                }
            }
        }
        for (auto it : v1) cout << it;
        for (auto it : x) cout << it;
        for (auto it : v) cout << it;
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
