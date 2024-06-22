#include "Dialogs.hpp"
#include "TextDialog.hpp"
#include <cmath>

std::string Dialogs::textCase;
std::map<std::string,int> Dialogs::textFormatSwitcher = {{"small",0},{"medium",1},{"big",2}};

Dialogs::Dialogs(int textArrayIndex): textArrayIndex(textArrayIndex) {
    dialogCaseSwitcher(textArrayIndex);
}

void Dialogs::dialogCaseSwitcher(int dialogIndex) {
    switch (dialogIndex) {
    
    case 0:
        textArray = TextDialog::getInitHistory();
        break;
    case 1:
        textArray = TextDialog::getMediumHistory();
        break;
    case 2:
        textArray = TextDialog::getFinalHistory();
        break;
    }
}

std::vector<std::string> Dialogs::getTextArray() {
    return textArray;
}

void Dialogs::setTextArray(int historyIndex) {
    textArray = TextDialog::getHistoriesArray()[historyIndex];
}

void Dialogs::printDesign(std::string dialog) {
    for (int idx = 0; idx < (int) stringShapeAnalysis(dialog) + 4; idx++) {
        if (!idx || (idx == (int) stringShapeAnalysis(dialog) + 3)) {
            std::cout << "+";
        } else {
            std::cout << "-";
        }
    }
    std::cout << std::endl;
}

std::string Dialogs::completWithBlankSpaces(int lastNumber, std::string dialog) {
    int size = (int) stringShapeAnalysis(dialog) - lastNumber;
    std::string str("");

    for (int idx = 0; idx < size; idx++) {
        str += " ";
    }
    str += " |";

    return str;
}

void Dialogs::formatAndShowDialog(std::string dialog) {

    int sqrtSize = (int) stringShapeAnalysis(dialog);
    double fracNumber = (dialog.size() / sqrtSize) - sqrtSize;
    int n = (int) fracNumber + 1;
    int range = sqrtSize + n;

    for (int idx = 0; idx < range; idx++) {
        if (idx == range-1) {
            std::cout << "| " << dialog.substr(idx * (sqrtSize)) <<
            completWithBlankSpaces(dialog.substr(idx* sqrtSize).size(), dialog) << std::endl;
            break;
        }
        std::cout << "| " << dialog.substr(idx * (sqrtSize), (sqrtSize)) << " |" << std::endl;
        
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

    return sqrt(dialog.size());

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