#include <iostream>

int main() {
    int choice;
    std::cout << "Choose an option (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You selected Option 1." << std::endl;
            break;
        case 2:
            std::cout << "You selected Option 2." << std::endl;
            break;
        case 3:
            std::cout << "You selected Option 3." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
