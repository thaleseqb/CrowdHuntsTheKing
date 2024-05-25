#include <string>
#include <array>
#include <map>

class Classes {

private:
    static std::map<std::string,int > mapTypes;
    static std::array<std::string,4> arrayTypes;
    static int qttClasses;
    std::string userType;
    int vigor;
    int dexterity;
    int strength;
    int intelligence;
    int luck;
    void defineVigor(int vigorBar);
    void defineDexterity(int dexterityAtt);
    void defineStrength(int strengthAtt);
    void defineIntelloigence(int IntAtt);
    void defineLuck(int LuckAtt);
    void initCharacter(int vigorBar, int dexterityAtt, int strengthAtt, int IntAtt, int LuckAtt);
    void constructCharacter(std::string userType, std::map<std::string,int> mapUser);
    static void pseudoMenu();
    static void whileNotStart(int& startCommand);

public:
    Classes();
    ~Classes();
    int getVigor();
    int getDexterity();
    int getStrength();
    int getIntelligence();
    int getLuck();
    void chooseCharacterType(std::string& userType);
    void showAttributes();
    static void showAvailableClasses();
    static void startTheGame();


};