#include "User.hpp"

User::User() {}

void User::setFirstName(string name) {
    _firstName = name;
}

string User::getFirstName() {
    return _firstName;
}

void User::setLastName(string name) {
    _lastName = name;
}

string User::getLastName() {
    return _lastName;
}

void User::setAge(int age) {
    _age = age;
}

int User::getAge() {
    return _age;
}

void User::setStreet(string street) {
    _street = street;
}

string User::getStreet() {
    return _street;
}

void User::print() {

    cout << "=== User ===\n";
    cout << "Name: " << _firstName << " " << _lastName << "\n";
    cout << "Age: " << _age << "\n";
    cout << "Street: " << _street << endl;

}
