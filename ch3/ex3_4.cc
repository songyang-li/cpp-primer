#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    auto len1 = s1.size();
    auto len2 = s2.size();
    if (len1 != len2) {
        if (len1 > len2) {
            cout << "s1 is larger" << endl;
        } else {
            cout << "s2 is larger" << endl;
        }
    } else {
        cout << "s1 and s2 are equal" << endl;
    }
    return 0;
}