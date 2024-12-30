#include <iostream>
#include "sample.class.hpp"

int main( void ) 
{
    Sample instance; // here we create an instance of the class Sample

    instance.foo = 42; // here we assign the value 42 to the attribute foo of the instance
    std::cout << "instance.foo: " << instance.foo << std::endl; // here we print the value of the attribute foo of the instance
    
    instance.bar(); // here we call the member function bar of the instance
    
    return 0;
}