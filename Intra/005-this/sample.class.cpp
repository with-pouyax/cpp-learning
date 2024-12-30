#include <iostream>
#include "sample.class.hpp"

Sample::Sample( void ) { // here we define the constructor of the class Sample
    std::cout << "Constructor called" << std::endl;
    
    this->foo = 42; /* 
                    - "this" is a pointer to the object that called the function.
                    - it means that we are accessing the attribute foo of the object that called the function and we are assigning the value 42 to it.
                    - we need a pointer to access the attribute of the object because the attribute foo is not a global variable, it is an attribute of the object.
                    - instead of using "this->foo" in constructor, we could use "instance.foo" in the main function.
                    -the difference is that "this->foo" is used to access the attribute of the object that called the function, and "instance.foo" is used to access the attribute of the object that was created in the main function.
                    - in summary, "this" allows us to access the attributes of the object from the constructor or member function of the class.
                     */
    std::cout << "this->foo: " << this->foo << std::endl;

    this->bar();
    
    return; // optional to write.
} // as you can see in this function we have no return type, because in c++ the constructor and destructor have no return type.

Sample::~Sample( void ) { // here we define the destructor of the class Sample
    std::cout << "Destructor called" << std::endl;
    return; // optional to write.
}

void Sample::bar( void ) {
    std::cout << "Member function bar called" << std::endl;
    return;
} 