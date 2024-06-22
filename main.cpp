#include "initMethods.hpp"
#include "Classes.hpp"
#include "Dialogs.hpp"
#include "ASCImages.hpp"
#include <string.h>
#include <vector>
#include <thread>
#include <chrono>
#include <iostream>

void printMenu() {

}

int main(int argc, char *argv[]) {

    HuntingKingGame::printInit();
    std::map<std::string,int> textCaseSwitcher = Dialogs::getTextFormatSwitcher();

    // this method will call the menu and explain more about the game
    Classes::startTheGame();
    Classes classe;
    classe.showAttributes();

    Dialogs dialog(0);
    HuntingKingGame::storyTeller(dialog);

    // ASCImages::testPrintAll();

}

