#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, m = 3;
      cin >> n;
      map<string, vector<int>> w_count;
      for (int i = 1;i <= m;i++) {
         for (int j = 1;j <= n;j++) {
            string s;
            cin >> s;
            w_count[s].push_back(i);
         }
      }

      vector<int> ans(m + 1);

      for (auto [x, y] : w_count) {
         vector<int> v = y;
         if (v.size() == 1) {
            ans[v[0]] += 3;
         }
         if (v.size() == 2) {
            ans[v[0]]++;
            ans[v[1]]++;
         }
      }

      for (int i = 1;i <= m;i++) {
         cout << ans[i] << " ";
      }
      cout << '\n';

   }
   return 0;
}