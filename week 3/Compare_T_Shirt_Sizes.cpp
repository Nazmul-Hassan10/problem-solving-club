#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        char back_a = a.back(), back_b = b.back();

        if (back_a == back_b) {
            if (a.size() == b.size()) {
                cout << "=" << endl;
            } else {
                if (back_a == 'S') {
                    if (a.size() > b.size()) {
                        cout << "<" << endl;
                    } else {
                        cout << ">" << endl;
                    }
                } else {
                    if (a.size() > b.size()) {
                        cout << ">" << endl;
                    } else {
                        cout << "<" << endl;
                    }
                }
            }
        } else {
            int len_a = 0, len_b = 0;

            if (back_a == 'S') {
                len_a = 1;
            } else if (back_a == 'M') {
                len_a = 2;
            } else if (back_a == 'L') {
                len_a = 3;
            }

            if (back_b == 'S') {
                len_b = 1;
            } else if (back_b == 'M') {
                len_b = 2;
            } else if (back_b == 'L') {
                len_b = 3;
            }

            if (len_a > len_b) {
                cout << ">" << endl;
            } else {
                cout << "<" << endl;
            }
        }
    }
    return 0;
}
