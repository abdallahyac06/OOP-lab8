#ifndef PREPACKEDFOOD_H
#define PREPACKEDFOOD_H

#include "product.h"
#include <string>

class PrepackedFood: public Product {
private:
    double price;

public:
    PrepackedFood(long = 0, const std::string& = "", double = 0);
    void setPrice(double);
    double getPrice() const;
    void scanner();
    void printer() const;
};

#endif