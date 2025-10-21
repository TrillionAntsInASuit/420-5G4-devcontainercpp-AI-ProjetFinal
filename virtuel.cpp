#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
    string name;
    
public:
    MyClass(int v, const string& n) : value(v), name(n) {}
    
    // Provide public getters
    int getValue() const { return value; }
    const string& getName() const { return name; }
};

// Non-member function using public interface
ostream& operator<<(ostream& os, const MyClass& obj) {
    os << "MyClass{value: " << obj.getValue() << ", name: " << obj.getName() << "}";
    return os;
}

int main() {
    MyClass obj(666, "ExampleTest");
    cout << obj << endl;
    return 0;
}