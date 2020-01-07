#include "Base.hpp"
#include "Derived.hpp"
#include <iostream>

using namespace std;

int main(){
    Base b;
    Derived d;  
    cout << " Base X = " << b.x << endl;
    cout << " Derived X = " << d.x << endl;
    cout << " Derived Y = " << d.y << endl;

    return 0;
}