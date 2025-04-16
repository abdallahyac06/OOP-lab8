#ifndef AUDI_H
#define AUDI_H

#include "car.h"

class Audi : public Car {
public:
    enum class Model {A1, A2, A3};

    Audi(int = 0, int = 0, int = 0, int = 0, int = 0, Fuel = Fuel::diesel, Model = Model::A1);
    virtual ~Audi() = default;

    void setModel(Model);
    Model getModel() const;

private:
    Model model;
};

#endif