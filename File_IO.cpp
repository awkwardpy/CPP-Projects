#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("sample.txt");
    if (!outFile) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    outFile << "Hello, File!";
    outFile.close();

    std::ifstream inFile("sample.txt");
    if (!inFile) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    std::string content;
    getline(inFile, content);

    std::cout << "File content: " << content << std::endl;

    inFile.close();

    return 0;
}
