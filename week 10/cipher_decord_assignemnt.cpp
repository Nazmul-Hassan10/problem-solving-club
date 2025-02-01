#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

char encrypt_letter(char letter) {
    if (isalpha(letter)) {
        int x = toupper(letter) - 'A';
        int encrypted_x = (23 * x + 13) % 26;
        return 'A' + encrypted_x;
    }
    return letter;
}

string encrypt_word(const string& word) {
    string encrypted;
    for (char letter : word) {
        encrypted += encrypt_letter(letter);
    }
    return encrypted;
}

int main() {
    vector<string> plaintext_words = {
        "AMONG",      "THE",       "REASON",    "AND",     "AMIDST",
        "THE",        "MYSTERY",   "LIES",      "A",       "THOUGHT",
        "BAFFLES",    "WITH",      "SCARCITY",  "WHAT",    "ONE",
        "THOUGHT",    "OF",        "BEING",     "A",       "COMPLETELY",
        "SHATTERED",  "STORY",     "FORGOTTEN", "IN",      "TIME",
        "WOVEN",      "IN",        "DEEPEST",   "OF",      "THE",
        "DEEPEST",    "MINE",      "WHAT",      "BEHOLDS", "IS",
        "SUPREME",    "QUESTIONS", "THAT",      "DWELLS",  "IN",
        "EVERYONE'S", "MIND"};

    unordered_map<string, string> encrypted_words;
    for (const string& word : plaintext_words) {
        encrypted_words[word] = encrypt_word(word);
    }

    for (const auto& pair : encrypted_words) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
