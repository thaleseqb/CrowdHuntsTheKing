#include <iostream>
#include <map>

class Dialogs {

    private:
    static std::map<std::string, int> textFormatSwitcher;
    static std::string textCase;
    static void switchTextCase(std::string dialog);
    static double stringShapeAnalysis(std::string dialog);
    static void printDesign(std::string dialog);
    static void formatAndShowDialog(std::string dialog);
    static void createTextBox(std::string dialog);
    // static std::string completWithBlankSpaces(int lastNumber, std::string dialog);

    public:
    static void selectCaseForTextBoxes(std::string dialog, std::map<std::string,int> textFormatSwitcher);
    static std::map<std::string,int> getTextFormatSwitcher();
};