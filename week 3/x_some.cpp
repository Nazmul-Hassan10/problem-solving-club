#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }

        long long max_sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long long curr_sum = mat[i][j];
                int x, y;

                x = i + 1, y = j + 1;
                while (x < n && y < m) {
                    curr_sum += mat[x++][y++];
                }

                x = i + 1, y = j - 1;
                while (x < n && y >= 0) {
                    curr_sum += mat[x++][y--];
                }

                x = i - 1, y = j - 1;
                while (x >= 0 && y >= 0) {
                    curr_sum += mat[x--][y--];
                }

                x = i - 1, y = j + 1;
                while (x >= 0 && y < m) {
                    curr_sum += mat[x--][y++];
                }

                max_sum = max(max_sum, curr_sum);
            }
        }
        cout << max_sum << endl;
    }

    return 0;
}
