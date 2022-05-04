#ifndef LAB3_FAMILY_H
#define LAB3_FAMILY_H
#pragma once


class Mom{
public:
    int ageMom;
    Mom(int pAgeMom);

    void printAge();
};

class Kid : public Mom{
public:
    int ageKid;
    Kid(int pAgeKid, int pAgeMom) : Mom(pAgeMom);
};

#endif //LAB3_FAMILY_H
