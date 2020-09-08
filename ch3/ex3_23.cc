#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    vector<int> vec(10 ,1);
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it = *it * 2;
    }
    for (int num: vec) {
        cout << num << endl;
    }
    return 0;
}