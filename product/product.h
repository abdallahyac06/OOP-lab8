#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    long barcode;
    std::string name;

public:
    Product(long = 0, const std::string& = "");
    void setCode(long);
    long getCode() const;
    void setName(const std::string&);
    std::string getName() const;
    void scanner();
    void printer() const;
};

#endif