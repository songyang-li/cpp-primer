#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string word;
    vector<string> vec;
    while (cin >> word) {
        vec.push_back(word);
    }

    for (auto &s: vec) {
        for (auto &c: s) {
            c = toupper(c);
        }
    }

    for (auto i = 0; i < vec.size(); i++) {
        if (i != 0 && i % 8 == 0) {
            cout << endl;
        }
        cout << vec[i] << " ";
    }
    return 0;
}