#include "audi.h"

Audi::Audi(int price, int mileage, int ownershipCost, int warranty, int capacity, Fuel fuel, Model model): Car(price, mileage, ownershipCost, warranty, capacity, fuel) {
    setModel(model);
}

void Audi::setModel(Model model) {
    this->model = model;
}

Audi::Model Audi::getModel() const {
    return model;
}