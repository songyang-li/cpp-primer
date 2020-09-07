#include <iostream>
#include <vector>

using std::cin;
using std::vector;
using std::cout;
using std::endl;

int main() {
    int num;
    vector<int> vec;
    while (cin >> num) {
        vec.push_back(num);
    }
    return 0;
}