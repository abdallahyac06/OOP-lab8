#ifndef BIKE_H
#define BIKE_H

#include "vehicle.h"

class Bike: public Vehicle {
public:
    enum class Cooler {air, liquid, oil};
    enum class Wheels {alloys, spokes};

    Bike(int = 0, int = 0, int = 0, int = 0, Cooler = Cooler::air, Wheels = Wheels::alloys, int = 0);
    virtual ~Bike() = default;

    void setCylinders(int);
    int getCylinders() const;
    void setGears(int);
    int getGears() const;
    void setCoolingType(Cooler);
    Cooler getCoolingType() const;
    void setWheelType(Wheels);
    Wheels getWheelType() const;
    void setFuelTankSize(int);
    int getFuelTankSize() const;

private:
    int cylinders;
    int gears;
    Cooler coolingType;
    Wheels wheelType;
    int fuelTankSize;
};

#endif