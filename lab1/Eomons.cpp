//
// Created by j_4k on 3/10/22.
//

#include <iostream>
#include "Eomons.h"

Eomons::Eomons(int strenght, int intelligence, const std::string &type) {
    this->strenght = strenght;
    this->intelligence = intelligence;
    this->type = type;
    std::cout << "Created object " << type << "!\n";
}

//    Eomons::~Eomons() {
//        std::cout << "Destoryed object " << type << "!\n";
//    }

void Eomons::setIntelligence(int intelligence) {
    if (intelligence > 0)
        this->intelligence = intelligence;
    else
        std::cout << "Intelligence cannot be less than 0\n";
}

void Eomons::setStrenght(int strenght) {
    if (strenght > 0)
        this->strenght = strenght;
    else
        std::cout << "strenght cannot be less than 0\n";
}

int Eomons::getIntelligence() {
    return this->intelligence;
}

int Eomons::getStrenght() {
    return strenght;
}

//int Eomons::getIntelligence() const {
//    return 0;
//}
