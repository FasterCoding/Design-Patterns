#include "Singleton.hpp"

Singleton* Singleton::_INSTANCE = nullptr;

Singleton* Singleton::getInstance() {

    if (!_INSTANCE) {
        _INSTANCE = new Singleton();
    }

    return _INSTANCE;
}

void Singleton::setNumber(int number) {
    _number = number;
}

int Singleton::getNumber() {
    return _number;
}