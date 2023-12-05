#include <iostream>
#include <map>

class Environment {
private:
    std::map<std::string, int> symbolTable;

public:

    Environment() {
        symbolTable = std::map<std::string, int>();
    }

    void insert(const std::string& symbol, int value) {
        symbolTable.insert(std::make_pair(symbol, value));
    }

    void printSymbolTable() {
        std::cout << "Symbol Table:" << std::endl;
        for (const auto& pair : symbolTable) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }
};

int main() {
    Environment env;
    env.insert("x", 10);
    env.insert("y", 20);

    env.printSymbolTable();

    return 0;
}