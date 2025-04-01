#include <iostream>

class MyClass {
public:
    int data;
    
    MyClass(int val) : data(val) {
        std::cout << "Constructor called\n";
    }

    // Copy constructor
    MyClass(const MyClass& obj) {
        data = obj.data;
        std::cout << "Copy constructor called\n";
    }

    ~MyClass() {
        std::cout << "Destructor called\n";
    }
};

void myFunction(MyClass obj) {  // Passed by value (Copy constructor is called)
    std::cout << "Inside function, data = " << obj.data << std::endl;
}

int main() {
    MyClass a(10);  // Constructor called
    myFunction(a);  // Copy constructor called (creates a copy of 'a')
    std::cout << "Back in main\n";
    return 0;
}
