#include <iostream>
#include "Eomons.h"
#include <vector>

void printEomonsFromVector(std::vector<Eomons> &Eomonbarracks);

int main() {
    Eomons warrior(5, 0, "warrior");

    warrior.setStrenght(5);
    std::cout << "Warrior strenght: " << warrior.getStrenght() << std::endl;

    warrior.setIntelligence(1);
    std::cout << "Warrior intelligence: " << warrior.getIntelligence() << std::endl;

    Eomons *archer = new Eomons(3, 3, "archer");

    // trigger destructor
    delete archer;

    // creating vector of Eomons
    std::vector<Eomons> Eomonbarracks;

    // filling vector
    Eomons mage(1, 5, "mage");
    Eomonbarracks.push_back(mage);
    Eomons starapepe(100, 100, "marzenka");
    Eomonbarracks.push_back(starapepe);
    Eomonbarracks.push_back(warrior);

    // print original version of eomon barracks
    printEomonsFromVector(Eomonbarracks);
    // change len of first eomon in barracks
    std::cout << "Changing intelligence..." << std::endl;
    Eomonbarracks[0].setIntelligence(666);
    // alternative: Eomonbarracks.at(0).setIntelligence(666);
    std::cout << "Intelligence changed!" << std::endl;
    // print changes vector
    printEomonsFromVector(Eomonbarracks);

    return 0;
}

// function to print Eomons objects from the provided vector
void printEomonsFromVector(std::vector<Eomons> &Eomonbarracks) {
    // TODO: understand how to write it easier (Clang-Tidy suggestion in IDE)
    for (auto &animal: Eomonbarracks)
        std::cout << "type: " << animal.type << " strenght: " << animal.getStrenght() << " intelligence: "
                  << animal.getIntelligence()
                  << std::endl;
}
