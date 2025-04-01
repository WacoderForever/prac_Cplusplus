#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    //write ISBN, no. of copies sold, price
    std::cin >> book;
    //output ISBN, no. of copies sold, total revenue, average price
    std::cout << book << std::endl;
    return 0;
}