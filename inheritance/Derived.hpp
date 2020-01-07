#ifndef DERIVED_H
#define DERIVED_H

#include "Base.hpp"

class Derived : public Base
{ 
    int y;
    public:
    // default constructor
    Derived() 
    { 
        cout << "Derived default constructor\n"; 
    }
    // parameterized constructor
    Derived(int i) 
    { 
        cout << "Derived parameterized constructor\n"; 
    }
};

#endif