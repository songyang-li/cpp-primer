#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main() {
    string s;
    getline(cin, s);
    for (auto c: s) {
        if (!ispunct(c)) {
            cout << c;
        }
    }
    return 0;
}