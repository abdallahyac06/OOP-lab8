#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
    int price;
    int mileage;

public:
    Vehicle(int = 0, int = 0);
    virtual ~Vehicle() = default;
    
    void setPrice(int);
    int getPrice() const;
    void setMileage(int);
    int getMileage() const;
};

#endif