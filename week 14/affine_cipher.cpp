#include <iostream>
#include <unordered_map>
using namespace std;

typedef long long ll;
const int a = 49, b = 13, MOD = 26;

unordered_map<char, int> char_map = {
    {'A', 15}, {'B', 2},  {'C', 9},  {'D', 24}, {'E', 18}, {'F', 7}, {'G', 13},
    {'H', 0},  {'I', 22}, {'J', 17}, {'K', 19}, {'L', 1},  {'M', 8}, {'N', 14},
    {'O', 25}, {'P', 3},  {'Q', 20}, {'R', 6},  {'S', 10}, {'T', 4}, {'U', 21},
    {'V', 11}, {'W', 12}, {'X', 5},  {'Y', 16}, {'Z', 23}};
unordered_map<int, char> reverse_map;

char affine_encrypt(char c) {
    if (char_map.count(c)) {
        int x = char_map[c];
        int encrypted_value = (a * x + b) % MOD;
        return reverse_map[encrypted_value];
    }
    return c;
}

int main() {
    for (auto &p : char_map) {
        reverse_map[p.second] = p.first;
    }

    string message =
        "AMONG THE REASON AND AMIDST THE MYSTERY LIES A THOUGHT BAFFLES WITH "
        "SCARCITY. "
        "WHAT ONE THOUGHT OF BEING A COMPLETELY SHATTERED STORY. FORGOTTEN IN "
        "TIME, "
        "WOVEN IN DEEPEST OF THE DEEPEST MINE, WHAT BEHOLDS IS SUPREME "
        "QUESTIONS THAT "
        "DWELLS IN EVERYONE’S MIND.";

    string encrypted_message;
    for (char c : message) {
        encrypted_message += affine_encrypt(c);
    }

    cout << "Encrypted Message:\n" << encrypted_message << endl;
    return 0;
}
