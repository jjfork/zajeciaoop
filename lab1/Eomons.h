//
// Created by j_4k on 3/10/22.
//

#ifndef LABY_Eomons_H
#define LABY_Eomons_H


#include <string>

class Eomons {
private:
    int intelligence;
    int strenght;

public:
    // TODO: move public attributes to the private section and create methods to fetch them
    // Additional task: create methods to change/set values also
    std::string type;

    void setIntelligence(int intelligence);

    int getIntelligence();

    void setStrenght(int strenght);

    int getStrenght();

    Eomons(int strenght, int intelligence, const std::string &type); // constructor
//    ~Eomons(); // destructor

};


#endif //LABY_Eomons_H
