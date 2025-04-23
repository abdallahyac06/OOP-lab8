#ifndef FRESHFOOD_H
#define FRESHFOOD_H

#include "product.h"
#include <string>

class FreshFood: public Product {
private:
    double weight;
    double pricePerKg;

public:
    FreshFood(long = 0, const std::string& = "", double = 0, double = 0);
    void setWeight(double);
    double getWeight() const;
    void setPricePerKg(double);
    double getPricePerKg() const;
    void scanner();
    void printer() const;
};

#endif