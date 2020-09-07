#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    // read line
    // string line;
    // while (getline(cin, line)) {
    //     cout << line << endl;
    // }
    // return 0;

    // read word
    string word;
    while (cin >> word) {
        cout << word << endl;
    }
    return 0;
}