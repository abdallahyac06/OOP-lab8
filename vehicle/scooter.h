#ifndef SCOOTER_H
#define SCOOTER_H

#include "bike.h"

class Scooter : public Bike {
public:
    enum class Model {Honda, Suzuki, Yamaha};

    Scooter(int = 0, int = 0, int = 0, int = 0, Cooler = Cooler::air, Wheels = Wheels::alloys, int = 0, Model = Model::Honda);
    virtual ~Scooter() = default;

    void setModel(Model);
    Model getModel() const;

private:
    Model model;
};

#endif