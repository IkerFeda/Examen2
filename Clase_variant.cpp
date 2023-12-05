#include <iostream>
#include <string>
#include <variant>
#include <unordered_map>

class Environment {
private:
    std::unordered_map<std::string, std::variant<int, float, std::string>> variables;

public:
    void setVariable(const std::string& name, const std::variant<int, float, std::string>& value) {
        variables[name] = value;
    }

    std::variant<int, float, std::string> getVariable(const std::string& name) {
        return variables[name];
    }
};

int main() {
    Environment env;

    // Asignar un valor entero a la variable "edad"
    env.setVariable("edad", 25);

    // Asignar un valor de punto flotante a la variable "altura"
    env.setVariable("altura", 1.75f);

    // Asignar un valor de cadena a la variable "nombre"
    env.setVariable("nombre", "Juan");

    // Obtener los valores de las variables y mostrarlos en la consola
    std::cout << "Edad: " << std::get<int>(env.getVariable("edad")) << std::endl;
    std::cout << "Altura: " << std::get<float>(env.getVariable("altura")) << std::endl;
    std::cout << "Nombre: " << std::get<std::string>(env.getVariable("nombre")) << std::endl;

    return 0;
}