#include "car.h"

Car::Car(int price, int mileage, int ownershipCost, int warranty, int capacity, Fuel fuel): Vehicle(price, mileage) {
    setOwnershipCost(ownershipCost);
    setWarranty(warranty);
    setCapacity(capacity);
    setFuel(fuel);
}

void Car::setOwnershipCost(int ownershipCost) {
    this->ownershipCost = (ownershipCost < 0)? 0: ownershipCost;
}

int Car::getOwnershipCost() const {
    return ownershipCost;
}

void Car::setWarranty(int warranty) {
    this->warranty = (warranty < 0)? 0: warranty;
}

int Car::getWarranty() const {
    return warranty;
}

void Car::setCapacity(int capacity) {
    this->capacity = (capacity < 0)? 0: capacity;
}

int Car::getCapacity() const {
    return capacity;
}

void Car::setFuel(Fuel fuel) {
    this->fuel = fuel;
}

Car::Fuel Car::getFuel() const {
    return fuel;
}