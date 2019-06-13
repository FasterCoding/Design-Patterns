#ifndef __USER_BUILDER_H_
#define __USER_BUILDER_H_

#include <string>

#include "../User/User.hpp"

class UserBuilder {

private:

    string _firstName;
    string _lastName;
    int _age;
    string _street;

public:

    UserBuilder();
    UserBuilder& withFirstName(string name);
    UserBuilder& withLastName(string name);
    UserBuilder& withAge(int age);
    UserBuilder& liveInStreet(string street);
    User& build();

};

#endif