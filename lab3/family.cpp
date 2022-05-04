#include "family.h"
#include <iostream>

    Mom::Mom(int pAgeMom){
        ageMom = pAgeMom;
    }

    void Mom::printAge(){
        std::cout << ageMom << std::endl;
    }

    Kid::Kid(int pAgeKid, int pAgeMom) : Mom(pAgeMom);{
        ageKid = pAgeKid;
    }
