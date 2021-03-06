#include <iostream>
#include "hero.h"

void Shop(Hero *player)
{
    std::cout << "What do you want to do?\n";
    std::cout << "[1] Restore health\n";
    std::cout << "[2] Upgrade attack point\n";
    std::cout << "[3] Upgrade armor\n";

    switch (PromptInt(1, 3))
    {
    case 1:
        *player.health = 100;
        break;
    case 2:
        *player.attack_point++;
        break;
    case 3:
        *player.armor++;
        break;
    default:
        std::cout << "\nIncorrect input!!";
        break;
    }
}