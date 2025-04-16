#include "bike.h"

Bike::Bike(int price, int mileage, int cylinders, int gears, Cooler coolingType, Wheels wheelType, int fuelTankSize): Vehicle(price, mileage) {
    setCylinders(cylinders);
    setGears(gears);
    setCoolingType(coolingType);
    setWheelType(wheelType);
    setFuelTankSize(fuelTankSize);
}

void Bike::setCylinders(int cylinders) {
    this->cylinders = (cylinders < 0)? 0: cylinders;
}

int Bike::getCylinders() const {
    return cylinders;
}

void Bike::setGears(int gears) {
    this->gears = (gears < 0)? 0: gears;
}

int Bike::getGears() const {
    return gears;
}

void Bike::setCoolingType(Cooler coolingType) {
    this->coolingType = coolingType;
}

Bike::Cooler Bike::getCoolingType() const {
    return coolingType;
}

void Bike::setWheelType(Wheels wheelType) {
    this->wheelType = wheelType;
}

Bike::Wheels Bike::getWheelType() const {
    return wheelType;
}

void Bike::setFuelTankSize(int fuelTankSize) {
    this->fuelTankSize = (fuelTankSize < 0)? 0: fuelTankSize;
}

int Bike::getFuelTankSize() const {
    return fuelTankSize;
}