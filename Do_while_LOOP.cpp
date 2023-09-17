#include <iostream>

int main() {
    int count = 1;

    do {
        std::cout << "Iteration " << count << std::endl;
        count++;
    } while (count <= 5);

    return 0;
}
