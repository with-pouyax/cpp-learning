#include <iostream>
#include "sample.class.hpp"

Sample::Sample( void ) { // here we define the constructor of the class Sample
    std::cout << "Constructor called" << std::endl;
    return; // optional to write.
} // as you can see in this function we have no return type, because in c++ the constructor and destructor have no return type.

Sample::~Sample( void ) { // here we define the destructor of the class Sample
    std::cout << "Destructor called" << std::endl;
    return; // optional to write.
}