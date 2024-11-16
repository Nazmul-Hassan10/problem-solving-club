#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt, pat;
    cin >> txt >> pat;
    vector<int> pat_freq(26, 0), win_freq(26, 0);

    int k = pat.size(), n = txt.size();
    for (int i = 0; i < k; i++) {
        pat_freq[pat[i] - 'a']++;
    }

    int l = 0, r = 0;
    int total_occ = 0;
    while (r < n) {
        win_freq[txt[r] - 'a']++;

        if (r - l + 1 == k) {
            if (win_freq == pat_freq) {
                total_occ++;
            }
            // for (auto it : win_freq) cout << it << " ";
            // cout << endl;
            win_freq[txt[l] - 'a']--;
            l++;
        }
        r++;
    }
    cout << total_occ << endl;
    return 0;
}
