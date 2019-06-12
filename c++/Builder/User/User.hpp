#ifndef __USER_H_
#define __USER_H_

#include <iostream>
#include <string>

using namespace std;

class User {

private:

    string _firstName;
    string _lastName;
    int _age;
    string _street;
    
public:

    User();
    
    void setFirstName(string name);
    string getFirstName();

    void setLastName(string name);
    string getLastName();

    void setAge(int age);
    int getAge();

    void setStreet(string street);
    string getStreet();

    void print();

};

#endif