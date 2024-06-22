#include <iostream>
#include "Dialogs.hpp"

class HuntingKingGame{
private:
    static void printGamesName();
    static short numberOfInimethods;
    static void printInitGame(int spaceBeetwen);
    static void initMethodSwitcher(int methodIndex);
    static void seeYouLatter(const char * quitKey);
public:
    static void printInit();
    static void storyTeller(Dialogs& dialog);

};
