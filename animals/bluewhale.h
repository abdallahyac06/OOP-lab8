#ifndef BLUEWHALE_H
#define BLUEWHALE_H

#include "mammal.h"
#include "marineanimal.h"

class BlueWhale: public Mammal, public MarineAnimal {
public:
    virtual void function();
};

#endif