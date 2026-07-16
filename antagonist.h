#ifndef ANTAGONIST_H
#define ANTAGONIST_H

#include <string>

class Antagonist {
private:
    std::string name{"Nasgradd"};
    int health{0};

public:
    Antagonist() {};
    void takeDamage();
};

#endif