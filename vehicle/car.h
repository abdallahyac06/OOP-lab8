#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car: public Vehicle {
public:
    enum class Fuel{diesel , petrole};

    Car(int = 0, int = 0, int = 0, int = 0, int = 0, Fuel = Fuel::diesel);
    virtual ~Car() = default;

    void setOwnershipCost(int);
    int getOwnershipCost() const;

    void setWarranty(int);
    int getWarranty() const;

    void setCapacity(int);
    int getCapacity() const;

    void setFuel(Fuel);
    Fuel getFuel() const;

private:
    int ownershipCost;
    int warranty;
    int capacity;
    Fuel fuel;
};

#endif