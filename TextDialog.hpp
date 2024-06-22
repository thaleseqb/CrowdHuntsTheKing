#pragma once
#include <vector>
#include <string>

class TextDialog {
private:
    static std::vector<std::string> initHistory;
    static std::vector<std::string> mediumHistory;
    static std::vector<std::string> finalHistory;

public:
    static std::vector<std::string> getInitHistory();
    static std::vector<std::string> getMediumHistory();
    static std::vector<std::string> getFinalHistory();

};