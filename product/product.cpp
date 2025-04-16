#include "product.h"
#include <iostream>
#include <string>

Product::Product(long b, const std::string &n): barcode(b), name(n) {}

void Product::setCode(long b) {
    barcode = b;
}

long Product::getCode() const {
    return barcode;
}

void Product::setName(const std::string &n) {
    name = n;
}

std::string Product::getName() const {
    return name;
}

void Product::scanner() {
    std::cin >> barcode >> name;
}

void Product::printer() const {
    std::cout << "Barcode: " << barcode << std::endl << "Product name: " << name << std::endl;
}
