#ifndef DERIVED_H
#define DERIVED_H

#include "Base.hpp"

class Derived : public Base
{ 
    public:
        int y;
        // default constructor, using the parameterized Base constructor
        Derived() : Base(777) 
        { 
            cout << "Derived default constructor\n"; 
        }
        // parameterized constructor
        Derived(int i) 
        { 
            y = i;
            cout << "Derived parameterized constructor\n"; 
        }
};

#endif