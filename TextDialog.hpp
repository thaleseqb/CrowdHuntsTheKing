#pragma once
#include <vector>
#include <string>

class TextDialog {
private:
    static std::vector<std::string> initHistory;
    static std::vector<std::string> mediumHistory;
    static std::vector<std::string> finalHistory;
    static std::vector<std::vector<std::string>> historiesArray;

public:
    static std::vector<std::string> getInitHistory();
    static std::vector<std::string> getMediumHistory();
    static std::vector<std::string> getFinalHistory();
    static std::vector<std::vector<std::string>> getHistoriesArray();

};