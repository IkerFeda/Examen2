#include "map"
#include "string"


class Environment {
private:
    std::map<std::string, int> symbolTable;

public:

    Environment() {
        symbolTable = std::map<std::string, int>();
    }


};

