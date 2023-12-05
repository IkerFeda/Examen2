#include <iostream>
#include <map>
#include <optional>

using namespace std;

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

    std::optional<int> lookup(const std::string& symbol) {
        auto it = symbolTable.find(symbol);
        if (it != symbolTable.end()) {
            return it->second;
        }
        return std::nullopt;
    }
};

int main() {
    Environment env;
    env.insert("x", 10);
    env.insert("y", 20);

    env.printSymbolTable();

    std::optional<int> value = env.lookup("x");
    if (value.has_value()) {
        std::cout << "Value of x: " << value.value() << std::endl;
    } else {
        std::cout << "Symbol x not found" << std::endl;
    }

    value = env.lookup("z");
    if (value.has_value()) {
        std::cout << "Value of z: " << value.value() << std::endl;
    } else {
        std::cout << "Symbol z not found" << std::endl;
    }

    return 0;
}
