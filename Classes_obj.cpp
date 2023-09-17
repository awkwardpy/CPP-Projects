#include <iostream>

class Student {
public:
    std::string name;
    int age;

    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    Student student1;
    student1.name = "Pankaj";
    student1.age = 20;

    student1.displayInfo();

    return 0;
}
