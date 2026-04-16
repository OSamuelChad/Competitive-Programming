#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    if (!(cin >> s)) return 0;
 
    int max_repeticao = 1;
    int atual_repeticao = 1;
 
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            atual_repeticao++;
        } else {
            max_repeticao = max(max_repeticao, atual_repeticao);
            atual_repeticao = 1;
        }
    }
 
    max_repeticao = max(max_repeticao, atual_repeticao);
 
    cout << max_repeticao << endl;
 
    return 0;
}