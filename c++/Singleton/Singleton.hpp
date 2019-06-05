#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton {

private:

    int _number;

    Singleton() {} 
    Singleton(Singleton const&) {}

    static Singleton* _INSTANCE;


public:

    static Singleton* getInstance();

    void setNumber(int number);
    int getNumber();

};

#endif
