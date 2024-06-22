#pragma once
#include <iostream>
#include <map>
#include <vector>

class Dialogs {

    private:
    static std::map<std::string, int> textFormatSwitcher;
    static std::string textCase;
    int textArrayIndex;
    std::vector<std::string> textArray;
    static void switchTextCase(std::string dialog);
    static double stringShapeAnalysis(std::string dialog);
    static void printDesign(std::string dialog);
    static void formatAndShowDialog(std::string dialog);
    static void createTextBox(std::string dialog);
    static std::string completWithBlankSpaces(int lastNumber, std::string dialog);
    void dialogCaseSwitcher(int dialogIndex);

    public:
    Dialogs(int textArrayIndex);
    static void selectCaseForTextBoxes(std::string dialog, std::map<std::string,int> textFormatSwitcher);
    static std::map<std::string,int> getTextFormatSwitcher();
    std::vector<std::string> getTextArray();
    void setTextArray(int historyIndex);
};