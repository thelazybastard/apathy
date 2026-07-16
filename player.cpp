#include "player.h"
#include <iostream>

void Player::sayName() { std::cout << "My name is " << Player::name << "\n"; }

void Player::takeDamage() { health -= 10; }

void Player::checkHealth() { std::cout << Player::health << "\n"; }

void Player::changeName() { Player::name = "I don't remember my name"; }
