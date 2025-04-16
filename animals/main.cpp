#include "mammal.h"
#include "marineanimal.h"
#include "bluewhale.h"
#include <iostream>

int main() {
    Mammal mammal;
    mammal.function();

    MarineAnimal marineAnimal;
    marineAnimal.function();
    
    BlueWhale blueWhale;
    blueWhale.function();
    blueWhale.Mammal::function();
    blueWhale.MarineAnimal::function();
    return 0;
}