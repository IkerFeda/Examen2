#include <map>
#include <string>
#include <iostream>

using namespace std;

class Environment {
private:
    std::map<std::string, int> symbolTable;

public:

    Environment() {
        // Initialize the symbol table
        symbolTable = std::map<std::string, int>();
    }

    void insert(const std::string& symbol, int value) {
        symbolTable.insert(std::make_pair(symbol, value));
    }

};

int main() {
    Environment env;
    env.insert("x", 10);
    env.insert("y", 20);

    std::cout << "Symbol Table:" << std::endl;
    for (const auto& pair : env.symbolTable) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}