#include <iostream>

#include "Singleton.hpp"

int main(int argc, char const *argv[]) {
    
    Singleton* singleton = Singleton::getInstance();
    Singleton* singletonTwo = Singleton::getInstance();

    singleton->setNumber(5);

    std::cout << "Singleton \n";
    std::cout << "Number: " << singleton->getNumber() << "\n";
    
    std::cout << "Singleton Two" << "\n";
    std::cout << "Number: " << singletonTwo->getNumber() << std::endl;

    singleton->setNumber(99);

    std::cout << "Singleton \n";
    std::cout << "Number: " << singleton->getNumber() << "\n";
    
    std::cout << "Singleton Two" << "\n";
    std::cout << "Number: " << singletonTwo->getNumber() << std::endl;

    delete singleton;
    delete singletonTwo;

    return 0;
}
