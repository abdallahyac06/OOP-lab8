#include "vehicle.h"

Vehicle::Vehicle(int price, int mileage) {
    setPrice(price);
    setMileage(mileage);
}

void Vehicle::setPrice(int price) {
    this->price = (price < 0)? 0: price;
}

int Vehicle::getPrice() const {
    return price;
}

void Vehicle::setMileage(int mileage) {
    this->mileage = (mileage < 0)? 0: mileage;
}

int Vehicle::getMileage() const {
    return mileage;
}