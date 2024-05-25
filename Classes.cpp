#include "Classes.hpp"
#include <map>
#include <iostream>

std::map<std::string, int> Classes::mapTypes = {{"ladino",0}, {"warrior",1}, {"alquimist",2}, {"bardo",3}};
int Classes::qttClasses = 4;

Classes::Classes() {
    chooseCharacterType(userType);
    constructCharacter(userType, mapTypes);
}

Classes::~Classes() {

}

void Classes::chooseCharacterType(std::string& userType) {
    std::cout << "*********Insert below the type of**********" << std::endl;
    std::cout << "*******character to play in this run*******" << std::endl;

    std::cin >> userType;

}

int Classes::getVigor() {
    return vigor;
}

int Classes::getDexterity() {
    return dexterity;
}

int Classes::getStrength() {
    return strength;
}

int Classes::getIntelligence() {
    return intelligence;
}

int Classes::getLuck() {
    return luck;
}

void Classes::defineVigor(int vigorBar) {
    vigor = vigorBar;
}
void Classes::defineStrength(int strengthAtt) {
    strength = strengthAtt;

}
void Classes::defineDexterity(int dexterityAtt) {
    dexterity = dexterityAtt;

}
void Classes::defineLuck(int LuckAtt) {
    luck = LuckAtt;

}
void Classes::defineIntelloigence(int IntAtt) {
    intelligence = IntAtt;

}

void Classes::initCharacter(int vigorBar, int dexterityAtt, int strengthAtt, int IntAtt, int LuckAtt) {
    defineVigor(vigorBar);
    defineDexterity(dexterityAtt);
    defineStrength(strengthAtt);
    defineIntelloigence(IntAtt);
    defineLuck(LuckAtt);
}

void Classes::constructCharacter(std::string userType, std::map<std::string,int> mapUser) {

    switch (mapUser[userType])
    {
    case 0:
        initCharacter(12, 15, 11, 11, 14);
        break;
    case 1:
        initCharacter(14, 11, 15, 11, 10);
        break;
    case 2:
        initCharacter(11, 12, 10, 15, 11);
        break;
    case 3:
        initCharacter(11, 12, 11, 12, 15);
        break;
    }
}

void Classes::showAttributes() {

    std::cout << "VIG " <<"*\\(v.v)/*   " << vigor << "   *\\(v.v)/*" << std::endl;
    std::cout << "DEX " <<"(->*=*)->   " << dexterity << "   (->*=*)->" << std::endl;
    std::cout << "STR " <<"(+)|-\\/-|=> " << strength << "   (+)|-\\/-|=>" << std::endl;
    std::cout << "INT " <<"(^-.-)-V    " << intelligence << "   (^-.-)-V" << std::endl;
    std::cout << "LCK " <<"~(*v*)~     " << luck << "   ~(*v*)~" << std::endl;   
}

void Classes::showAvailableClasses() {
    std::cout << std::endl;
    std::cout << "These are the available classes and your greatest skills" << std::endl;
    std::cout << std::endl;

    std::cout << "Ladino: Dexterity" << " initial status: V:12, D:15, S:11, I:11, L:14"<< std::endl;
    std::cout << "Warrior: Strength" << " initial status: V:14, D:11, S:15, I:11, L:10" << std::endl;
    std::cout << "Alquimist: Intelligence" << " initial status: V:11, D:12, S:10, I:15, L:11" << std::endl;
    std::cout << "Bardo: Luck" << " initial status: V:11, D:12, S:11, I:12, L:15" << std::endl;

    std::cout << std::endl;
}

void Classes::pseudoMenu() {
    std::cout << std::endl;

    std::cout << "0: ------------------- Starts the game" << std::endl;
    std::cout << "1: Show all classes and the attributes" << std::endl;
    std::cout << "2: --------- Learn more about the lore" << std::endl;
    
    std::cout << std::endl;
}

void Classes::whileNotStart(int& notStart) {
    
    while (notStart) {
        
        if (notStart != 0) {
            pseudoMenu();
        }

        switch (notStart) {
            case 1:
                showAvailableClasses();
                break;

            case 2:
                std::cout << "Certainlly you will know more if you play the game :)" << std::endl;
                break;
        }
        std::cout << "insert your option" << std::endl;
        std::cin >> notStart;

    }
}

void Classes::startTheGame() {
    std::cout << "The game will start" << std::endl;
    int startCommand = 1000;

    whileNotStart(startCommand);

    }




