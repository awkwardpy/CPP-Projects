#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, ";
    std::string name = "Alice";
    std::string message = greeting + name;

    std::cout << message << std::endl;
    std::cout << "Length of message: " << message.length() << std::endl;

    return 0;
}
