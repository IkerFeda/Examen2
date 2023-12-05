#include <iostream>
#include <string>
#include <variant>
#include <unordered_map>
#include <stdexcept>

class Environment {
private:
    std::unordered_map<std::string, std::variant<int, float, std::string>> variables;

public:
    // ...

    int getPlayerHealth() {
        if (variableExists("player_health")) {
            return std::get<int>(getVariable("player_health"));
        } else {
            return 0;
        }
    }

    void setPlayerHealth(int health) {
        setVariable("player_health", health);
    }

    float getPlayerSpeed() {
        if (variableExists("player_speed")) {
            return std::get<float>(getVariable("player_speed"));
        } else {
            return 0.0f;
        }
    }

    void setPlayerSpeed(float speed) {
        setVariable("player_speed", speed);
    }

    // ...
};

int main() {
    Environment env;


    env.setPlayerHealth(100);
    env.setPlayerSpeed(5.0f);


    std::cout << "Player Health: " << env.getPlayerHealth() << std::endl;
    std::cout << "Player Speed: " << env.getPlayerSpeed() << std::endl;

    return 0;
}
