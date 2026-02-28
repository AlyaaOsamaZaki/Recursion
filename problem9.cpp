#include <iostream>
#include <string>
using namespace std;


bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


int countVowels(string s, int i) {

    if (i == s.length()) {
        return 0;
    }


    int current = isVowel(s[i]) ? 1 : 0;

    return current + countVowels(s, i + 1);
}

int main() {
    string S;
    getline(cin, S);

    cout << countVowels(S, 0) << endl;

    return 0;
}
