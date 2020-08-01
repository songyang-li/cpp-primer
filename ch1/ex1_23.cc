#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item curr, val;
    if (std::cin >> curr) {
        int cnt = 1;
        while (std::cin >> val) {
            if (curr.isbn() == val.isbn()) {
                cnt++;
            } else {
                std::cout << curr << " occurs " << cnt << " times" << std::endl;
                curr = val;
                cnt = 1;
            }
        }
        std::cout << curr << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}