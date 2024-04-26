#include <iostream>
#include <string>

int main() {
    std::string firstName;

    std::cout << "Please enter your first name: ";
    std::cin >> firstName;

    std::cout << "Hello, " << firstName << "!" << std::endl;

    return 0;
}
