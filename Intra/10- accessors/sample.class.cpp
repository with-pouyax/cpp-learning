

#include <iostream>
#include "sample.class.hpp"

Sample::Sample( void ) 
{
    std::cout << "Constructor called" << std::endl;

    this->setFoo(0);
    std::cout << "this->getFoo() = " << this->getFoo() << std::endl;
    
    return;
}

Sample::~Sample( void ) { 
    std::cout << "Destructor called" << std::endl;
    return;
}

int     Sample::getFoo( void ) const {
    return this->_foo;
}

void    Sample::setFoo( int v ) {
    if (v >= 0) { // we want to avoid negative values, if user set a negative value, we will not change the value of _foo
        this->_foo = v;
    }
    return;
}