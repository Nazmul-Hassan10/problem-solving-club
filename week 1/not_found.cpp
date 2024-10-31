#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    string s;
    cin >> s;
    int freq[26] = {0};

    for(char i : s) {
        freq[i - 'a']++;
    }

    bool got_ans = false;
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            cout << char(i + 'a') << "\n";
            got_ans = true;
            break;
        }
    }

    if (!got_ans) {
        cout << "None" << endl;
    }
    
    return 0;
}
