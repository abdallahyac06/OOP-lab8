#include "scooter.h"

Scooter::Scooter(int price, int mileage, int cylinders, int gears, Cooler coolingType, Wheels wheelType, int fuelTankSize, Model model): Bike(price, mileage, cylinders, gears, coolingType, wheelType, fuelTankSize){
    setModel(model);
}

void Scooter::setModel(Model model) {
    this->model = model;
}

Scooter::Model Scooter::getModel() const {
    return model;
}