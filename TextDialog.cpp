#include <vector>
#include <string>
#include "TextDialog.hpp"

std::vector<std::string> TextDialog::initHistory = {"Na raiz do prospero Reino de Aburamitawa, ergue-se o imponente Castelo de Diamante, no qual reside o impiedoso rei Mausstorv Kohan I. Este soberano, famoso por sua avareza, governava com mão de ferro, indiferente aos sofrimentos dos plebeus que habitavam suas terras. Enquanto o povo enfrentava invernos rigorosos e colheitas escassas, Kohan banqueteava-se com os melhores manjares, cercado de riquezas e iguarias. Kohan era reconhecido por toda a redondeza como um rei que jamais mostrou a sua face.", "Os saloes do castelo resplandeciam com ouro e pedras preciosas, um testemunho da fortuna acumulada pelo rei as custas de altos impostos. Para Kohan, os problemas do reino eram meros boatos distantes, abafados pelos luxos e prazeres que o rodeavam. Seus conselheiros, tambem apoiavam a tirania que o rei aplicava nos pobres camponeses que nada podiam fazer, reafirmando a bolha de opulencia e desprezo em que ele vivia."};



std::vector<std::string> TextDialog::mediumHistory = {"ola"};





std::vector<std::string> TextDialog::finalHistory = {"ola"};


std::vector<std::string> TextDialog::getInitHistory() {
    return initHistory;
}

std::vector<std::string> TextDialog::getMediumHistory() {
    return mediumHistory;
}

std::vector<std::string> TextDialog::getFinalHistory() {
    return finalHistory;
}