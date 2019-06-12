#include "UserBuilder.hpp"

UserBuilder::UserBuilder() {}

UserBuilder& UserBuilder::withFirstName(string name) {
    _firstName = name;
    return *this;
}

UserBuilder& UserBuilder::withLastName(string name) {
    _lastName = name;
    return *this;
}

UserBuilder& UserBuilder::withAge(int age) {
    _age = age;
    return *this;
}

UserBuilder& UserBuilder::liveInStreet(string street) {
    _street = street;
    return *this;
}

User& UserBuilder::build() {
    User* user = new User(_firstName, _lastName, _age, _street);
    return *user;
}
