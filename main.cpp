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

    std::string lorem = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
    
    Dialogs::selectCaseForTextBoxes(lorem, textCaseSwitcher);

    // ASCImages::testPrintAll();

}

