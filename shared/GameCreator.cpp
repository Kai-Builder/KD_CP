//
// Created by Kai Gonzalez on 5/6/21.
//

#include <iostream>
#include "GameCreator.h"
#include "libkd.h"

void CreateGame()
{
    KD_PrintScreen("thank you for loading the game service.");
    KD_PrintScreen("type 'begin' to start the process.");
    KD_PrintScreen("alternatively, type 'leave' to stop the service.");
    std::string begin;
    std::string GameName;
    std::string GameJSON;
    std::cin >> begin;
    if (KD_)
}
