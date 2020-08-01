#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item sales_item, total;
    if (std::cin >> total) {
        while (std::cin >> sales_item) {
            total += sales_item;
        }
        std::cout << total << std::endl;
    }
    return 0;
}