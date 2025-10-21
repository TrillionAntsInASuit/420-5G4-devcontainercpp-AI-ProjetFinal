#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function
    virtual void display() {
        cout << "Fonction de la classe de base" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Fonction de la classe dérivée" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr;

    basePtr = &derivedObj;
    
    basePtr->display();
    return 0;
}