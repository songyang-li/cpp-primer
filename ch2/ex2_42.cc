#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data sales_data;
    double price;
    if (std::cin >> sales_data.bookNo >> sales_data.units_sold >> price) {
        sales_data.revenue = sales_data.units_sold * price;

        Sales_data curr_sales_data;
        double curr_price;
        while (std::cin >> curr_sales_data.bookNo >> curr_sales_data.units_sold >> curr_price) {
            curr_sales_data.revenue = curr_sales_data.units_sold * curr_price;

            if (sales_data.bookNo == curr_sales_data.bookNo) {
                sales_data.units_sold += curr_sales_data.units_sold;
                sales_data.revenue += curr_sales_data.revenue;
            } else {
                std::cout << sales_data.bookNo << " " << sales_data.units_sold << " " << sales_data.revenue << std::endl;
                sales_data = curr_sales_data;
            }
        }
        std::cout << sales_data.bookNo << " " << sales_data.units_sold << " " << sales_data.revenue << std::endl;
        return 0;
    } else {
        std::cerr << "No data" << std::endl;
        return -1;
    }
}