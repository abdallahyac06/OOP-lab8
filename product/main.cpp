#include "product.h"
#include "prepackedfood.h"
#include"freshfood.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Product p1(123456, "Milk");
    Product p2;
    std::cout << "Enter Product." << std::endl;
    p2.scanner();

    p1.printer();
    p2.printer();

    PrepackedFood pre1(111111, "Chips", 2.5);
    PrepackedFood pre2;
    std::cout << "Enter Prepacked Product." << std::endl;
    pre2.scanner();

    pre1.printer();
    pre2.printer();

    FreshFood fresh1(222222, "Apples", 1.2, 3.0);
    FreshFood fresh2;
    std::cout << "Enter Fresh Food." << std::endl;
    fresh2.scanner();

    fresh1.printer();
    fresh2.printer();

    return 0;
}