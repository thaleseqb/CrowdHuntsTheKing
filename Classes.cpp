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

    std::cout << "teste para saber se o dicionario esta funcionando corretamente" << std::endl;

    std::cout << mapUser[userType] << std::endl;

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
        initCharacter(12, 13, 11, 12, 15);
        break;
    }
}

void Classes::showAttributes() {
    std::cout << "VIG " <<"************** " << vigor << " **************" << std::endl;
    std::cout << "DEX " <<"************** " << dexterity << " **************" << std::endl;
    std::cout << "STR " <<"************** " << strength << " **************" << std::endl;
    std::cout << "INT " <<"************** " << intelligence << " **************" << std::endl;
    std::cout << "LCK " <<"************** " << luck << " **************" << std::endl;   
}

void Classes::showAvailableClasses() {
    std::cout << "These are the available classes: " << std::endl;

}

