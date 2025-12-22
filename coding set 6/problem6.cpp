#include <iostream>
using namespace std;

class Animal {
public:
    // virtual remove krke agr ptr se call kiya toh Base class wala speak() call hoga
    virtual void speak() {
        cout << "Animal speaks..." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog says: Bow Bow!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Cat says: Meow Meow!" << endl;
    }
};

int main() {
    Animal* ptr; 

    Dog d;
    Cat c;
    d.speak();
    c.speak();

    ptr = &d;
    ptr->speak(); // Calls Dog speak() 

    ptr = &c;
    ptr->speak(); // Calls Cat speak()

    return 0;
}