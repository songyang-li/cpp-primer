#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main() {
    int num;
    vector<int> vec;
    while (cin >> num) {
        vec.push_back(num);
    }
    for (auto i = 0; i < vec.size() - 1; i++) {
        cout << vec[i] + vec[i + 1] << endl;
    }
    return 0;
}