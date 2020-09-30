/*
From "Effective C++, 3rd edition"
item 20: prefer pass by reference to const, to pass by value.
*/



#include <iostream>

using namespace std;
class Person
{
    public: 
        Person(int newAge): age(newAge) 
        {
            age = 0;
            cout << "PERSON CONSTRUCTOR" << endl;
        };

        // copy constructor
        Person (const Person &p)
        {
            age = p.age;
            cout << "PERSON COPY CONSTRUCTOR" << endl;
        }
        ~Person()
        {
          cout << "PERSON DESTRUCTOR" << endl;  
        };
    
    int getAge()
    {
        return age;
    };

    // needs to be marked const, to be called on a const obect
    int getAge() const
    {
        return age;
    };

    private:
        int age;

};

bool checkAge(Person person)
{
    if (person.getAge() < 100) return true; else return false;
};

bool checkAgeConst(const Person& person)
{
    if (person.getAge() < 100) return true; else return false;
};

int main()
{
    cout << "Hello World\n";
    Person person(34);

    cout << "------- NON CONST CALL" << endl;

    // A function call on the non const object:  
    // this implies copying the person object 
    // when passing the argument to the function, 
    // as C++ is pass-by-value.
    if (checkAge(person))
    {
        cout << "AGE OK" << endl;
    }
        else
        {
          cout << "AGE NOT OK" << endl;  
     }

    // A function call with a const object:  
    // the person object doesn't need to 
    // be re-instanciated and destroyed.
cout << "------- CONST CALL" << endl;
    if (checkAgeConst(person))
    {
        cout << "AGE OK" << endl;
    }
        else
        {
          cout << "AGE NOT OK" << endl;  
     }
        
cout << "------- END OF MAIN" << endl;
    return 0;
}