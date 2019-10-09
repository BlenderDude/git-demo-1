#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter some text \n> ";
    std::string input;
    std::cin >> input;
    std::cout << "Hello World - " << input << std::endl;
    return 0;
}