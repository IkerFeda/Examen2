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
        auto it = variables.find(name);
        if (it != variables.end()) {
            return it->second;
        } else {
            // Si la variable no existe, se lanza una excepción
            throw std::out_of_range("Variable '" + name + "' does not exist");
        }
    }
};

int main() {
    Environment env;

    env.setVariable("age", 25);

    env.setVariable("height", 1.75f);

    env.setVariable("name", "Juan");

    try {
        std::cout << "Age: " << std::get<int>(env.getVariable("age")) << std::endl;
        std::cout << "Height: " << std::get<float>(env.getVariable("height")) << std::endl;
        std::cout << "Name: " << std::get<std::string>(env.getVariable("name")) << std::endl;

    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
