#include <iostream>
#include "lab2.h"

class mom{
public:
    int ageMom;
    
    void printAge(){
        std::cout << ageMom << std::endl;
    }
    
    mom(int pAgeMom){
        ageMom = pAgeMom;
        std::cout << "object class mom was created\n";
    }
};

class dad{
public:
    int ageDad;

    dad(int pAgeDad){
        ageDad = pAgeDad;
    }
};

class kid : public mom, public dad{
public:
    int ageKid;

    void printData(){
        std::cout << "kid age " << ageKid << std::endl;
        std::cout << "mom age " << ageMom << std::endl;
    }
    kid(int pAgeMom, int pAgeDad, int pAgeKid) : mom(pAgeMom), dad(pAgeDad){

        std::cout << "object class kid was created\n";
    }
};

int main(){
    kid iwona(35, 35 ,10);
    iwona.printAge();

    return 0;
}
