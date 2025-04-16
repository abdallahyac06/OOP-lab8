#include "freshfood.h"
#include <iostream>
#include <string>

FreshFood::FreshFood(long b = 0, const std::string &n = "", double w = 0, double p = 0): Product(b, n), weight(w), pricePerKg(p) {}

void FreshFood::setWeight(double w) {
    weight = w;
}

double FreshFood::getWeight() const {
    return weight;
}

void FreshFood::setPricePerKg(double p) {
    pricePerKg = p;
}

double FreshFood::getPricePerKg() const {
    return pricePerKg;
}

void FreshFood::scanner() {
    Product::scanner(); std::cin >> weight >> pricePerKg;
}

void FreshFood::printer() const {
    Product::printer();
    std::cout << "Weight: " << weight << std::endl << "Price/Kg: " << pricePerKg << std::endl;
}
