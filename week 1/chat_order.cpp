#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    unordered_map<string, int> fr;
    deque<string> dq;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (fr[name]) {
            for (auto &i : dq) {
                if (i == name) {
                    i = "";
                    break;
                }
            }
        }
        
        dq.push_front(name);
        fr[name] = 1;
    }

    for (auto name : dq) {
        cout << name << endl;
    }
    return 0;
}