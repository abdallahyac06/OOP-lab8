#include "prepackedfood.h"
#include <iostream>
#include <string>

PrepackedFood::PrepackedFood(long b = 0, const std::string &n = "", double p = 0): Product(b, n), price(p) {}

void PrepackedFood::setPrice(double p) {
    price = p;
}

double PrepackedFood::getPrice() const {
    return price;
}

void PrepackedFood::scanner() {
    Product::scanner(); std::cin >> price;
}

void PrepackedFood::printer() const {
    Product::printer();
    std::cout << "Price: " << price << std::endl;
}
