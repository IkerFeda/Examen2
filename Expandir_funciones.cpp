#include <iostream>
#include <string>
#include <variant>
#include <unordered_map>
#include <stdexcept>

class Environment {
private:
    std::unordered_map<std::string, std::variant<int, float, std::string>> variables;

public:
    void setVariable(const std::string& name, const std::variant<int, float, std::string>& value) {
        variables[name] = value;
    }

    std::variant<int, float, std::string> getVariable(const std::string& name) {
        if (variables.find(name) != variables.end()) {
            return variables[name];
        } else {
            throw std::out_of_range("Variable '" + name + "' does not exist");
        }
    }

    void removeVariable(const std::string& name) {
        variables.erase(name);
    }

    bool variableExists(const std::string& name) {
        return variables.find(name) != variables.end();
    }

    void printVariables() {
        for (const auto& variable : variables) {
            std::cout << variable.first << ": ";
            std::visit([](const auto& value) {
                std::cout << value;
            }, variable.second);
            std::cout << std::endl;
        }
    }
};

int main() {
    Environment env;

    env.setVariable("age", 25);
    env.setVariable("height", 1.75f);
    env.setVariable("name", std::string("Juan"));

    try {
        std::cout << "Age: " << std::get<int>(env.getVariable("age")) << std::endl;
        std::cout << "Height: " << std::get<float>(env.getVariable("height")) << std::endl;
        std::cout << "Name: " << std::get<std::string>(env.getVariable("name")) << std::endl;

    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Age: " << std::get<int>(env.getVariable("age")) << std::endl;
    std::cout << "Height: " << std::get<float>(env.getVariable("height")) << std::endl;
    std::cout << "Name: " << std::get<std::string>(env.getVariable("name")) << std::endl;

    env.removeVariable("age");
    std::cout << "Age exists: " << env.variableExists("age") << std::endl;

    env.printVariables();

    return 0;
}
