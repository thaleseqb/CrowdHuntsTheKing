#include "Dialogs.hpp"
#include <cmath>

std::string Dialogs::textCase;
std::map<std::string,int> Dialogs::textFormatSwitcher = {{"small",0},{"medium",1},{"big",2}};

void Dialogs::printDesign(std::string dialog) {
    for (int idx = 0; idx << (int) stringShapeAnalysis(dialog); idx++) {
        if (!idx || (idx == (int) stringShapeAnalysis(dialog) - 1)) {
            std::cout << "+";
        } else {
            std::cout << "-";
        }
    }
    std::cout << std::endl;
}

void Dialogs::formatAndShowDialog(std::string dialog) {

    double sqrtSize = (int) stringShapeAnalysis(dialog);

    for (int idx = 0; idx < sqrtSize; idx++) {
        std::cout << "| " << dialog.substr(idx * (sqrtSize-2), (idx+1) * (sqrtSize-2)) << " |" << std::endl;
    }
}

void Dialogs::createTextBox(std::string dialog) {

    printDesign(dialog);
    formatAndShowDialog(dialog);
    printDesign(dialog);

}

std::map<std::string,int> Dialogs::getTextFormatSwitcher() {

    return textFormatSwitcher;

}

double Dialogs::stringShapeAnalysis(std::string dialog) {

    int stringSize = dialog.size();
    return sqrt(stringSize);

}

void Dialogs::switchTextCase(std::string dialog) {

    double sqrtStringSize = stringShapeAnalysis(dialog);

    if (sqrtStringSize < 10) {
        textCase = "small";

    } else if (10 < sqrtStringSize && sqrtStringSize < 20) {
        textCase = "medium";
    } else {
        textCase = "big";
    }

}

void Dialogs::selectCaseForTextBoxes(std::string dialog, std::map<std::string,int> textFormatSwitcher) {
    switchTextCase(dialog);

    switch (textFormatSwitcher[textCase]) {
    
        case 0:
            std::cout << "+----------------------------------------------------------------------------------------+" << std::endl;
            std::cout << "| " <<  dialog << " |" << std::endl;
            std::cout << "+----------------------------------------------------------------------------------------+" << std::endl;
            break;

        case 1:
            createTextBox(dialog);
            break;
        
        case 2:
            createTextBox(dialog);
            break;

    }
}