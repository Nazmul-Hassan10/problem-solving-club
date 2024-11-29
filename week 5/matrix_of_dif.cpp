#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int small = 1, big = n * n;
        vector<vector<int>> mat(n, vector<int>(n));

        int curr_idx = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    if (curr_idx % 2 == 1) {
                        mat[i][j] = small;
                        small++;
                    } else {
                        mat[i][j] = big;
                        big--;
                    }
                    curr_idx++;
                }
            } else {
                for (int j = n - 1; j >= 0; j--) {
                    if (curr_idx % 2 == 1) {
                        mat[i][j] = small;
                        small++;
                    } else {
                        mat[i][j] = big;
                        big--;
                    }
                    curr_idx++;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
