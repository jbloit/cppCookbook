#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;
class Base {
    
    public:
        int x;
        Base()
        {
            x = 666;
            cout << "base default constructor\n";
        }
    protected:
        Base(int i)
        {
            x = i;
            cout << "base paramterized constructor\n";
        }
};

#endif