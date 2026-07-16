#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    int health{};
    std::string name{};

public:
    Player(std::string_view playerName, int playerHealth)
        : name{playerName}, health{playerHealth} {}

    void sayName();
    void takeDamage();
    void checkHealth();
    void forgetNameEvent();
    void changeName();
};

#endif