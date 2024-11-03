#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << (s == "a" ? "wa" : "a" + s) << endl;
        return;
    }

    deque<char> dq;
    bool insertion_done = false;

    for (int i = s.size() - 1; i >= 0; i--) {
        dq.push_front(s[i]);

        if (!insertion_done && i > 0 && s[i] == s[i - 1]) {
            char insert_char = (s[i] == 'z' ? 'a' : s[i] + 1);
            dq.push_front(insert_char);
            insertion_done = true;
        }
    }

    if (!insertion_done) {
        char insert_char;
        if (s[0] == 'a') {
            insert_char = 'b';
        } else if (s[0] == 'z') {
            insert_char = 'a';
        } else {
            insert_char = s[0] + 1;
        }

        dq.push_front(insert_char);
        
    }
    
    for (auto ch : dq) cout << ch;  
    cout << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {    
        solve();
    }
    
    return 0;
}
