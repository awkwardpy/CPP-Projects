#include <iostream>

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int result = add(10, 5);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
