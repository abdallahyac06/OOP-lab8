#include "audi.h"
#include "scooter.h"
#include "iostream"

void printAudi(const Audi&);
void printScooter(const Scooter&);

int main() {
    Audi audi(3000000, 1000, 2500000, 10, 5, Car::Fuel::petrole, Audi::Model::A2);
    printAudi(audi);
    Scooter scooter(1000000, 0, 2, 4, Scooter::Cooler::liquid, Scooter::Wheels::spokes, 20, Scooter::Model::Yamaha);
    printScooter(scooter);
}

void printAudi(const Audi &audi) {
    std::cout << "Price: " << audi.getPrice() << " Da." << std::endl <<
    "Mileage: " << audi.getMileage() << " Km." << std::endl <<
    "Ownership cost: " << audi.getOwnershipCost() << " Da." << std::endl <<
    "Warranty: " << audi.getWarranty() << " years." << std::endl <<
    "Seating capacity: " << audi.getCapacity() << " people." << std::endl <<
    "Fuel type: ";
    switch (audi.getFuel()) {
    case Car::Fuel::diesel:
        std::cout << "diesel." << std::endl;
        break;

    case Car::Fuel::petrole:
        std::cout << "petrole." << std::endl;
        break;
    
    default:
        break;
    }
    std::cout << "Model: ";
    switch(audi.getModel()) {
    case Audi::Model::A1:
        std::cout << "A1.";
        break;

    case Audi::Model::A2:
        std::cout << "A2.";
        break;

    case Audi::Model::A3:
        std::cout << "A3.";
        break;

    default:
        break;
    }
    std::cout << std::endl;
}

void printScooter(const Scooter &scooter) {
    std::cout << "Price: " << scooter.getPrice() << " Da." << std::endl <<
    "Mileage: " << scooter.getMileage() << std::endl <<
    "Number of gears: " << scooter.getGears() << std::endl <<
    "Cooling type: ";
    switch (scooter.getCoolingType()) {
    case Scooter::Cooler::air:
        std::cout << "air." << std::endl;
        break;

    case Scooter::Cooler::liquid:
        std::cout << "liquid." << std::endl;
        break;

    default:
        break;
    }
    std::cout << "Wheel type: ";
    switch (scooter.getWheelType()) {
    case Scooter::Wheels::alloys:
        std::cout << "alloy." << std::endl;
        break;

    case Scooter::Wheels::spokes:
        std::cout << "spokes." << std::endl;
        break;

    default:
        break;
    }
    std::cout << "Fuel tank Size: " << scooter.getFuelTankSize() << " liters" << std::endl;
    std::cout << "Model: ";
    switch (scooter.getModel()) {
    case Scooter::Model::Honda:
        std::cout << "Honda.";
        break;

    case Scooter::Model::Yamaha:
        std::cout << "Yamaha.";
        break;

    case Scooter::Model::Suzuki:
        std::cout << "Suzuki.";
        break;

    default:
        break;
    }
    std::cout << std::endl;
}
