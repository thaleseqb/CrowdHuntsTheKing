#include "initMethods.hpp"
#include "Classes.hpp"
#include <string.h>
#include <vector>
#include <thread>
#include <chrono>
#include <iostream>

void printMenu() {

}

int main(int argc, char *argv[]) {


    HuntingKingGame::printInit();

    // this method will call the menu and explain more about the game
    Classes::startTheGame();

    Classes classe;

    classe.showAttributes();


}

