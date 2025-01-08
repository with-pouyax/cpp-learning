

#include <iostream>
#include "sample.class.hpp"

Sample::Sample( int v ) : _foo(v)                               // _foo(v) means that _foo is initialized with v
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample( void ) { 
    std::cout << "Destructor called" << std::endl;
    return;
}

int     Sample::getFoo( void ) const {
    return this->_foo;
}

int Sample::compare( Sample * other ) const {       /* 
                                                        - compare function to compare two instances of the same class
                                                        - Sample::compare means that compare is a member function of the Sample class
                                                        - Sample * other => Sample is the type of the parameter, * means that it is a pointer, other is the name of the parameter
                                                        - like this we can pass compare a pointer to another instance of the Sample class

                                                    */
    if (this->_foo < other->getFoo())               // if the value of _foo in the current instance is less than the value of _foo in the other instance return -1
        return -1;
    else if (this->_foo > other->getFoo())          // if the value of _foo in the current instance is greater than the value of _foo in the other instance return 1
        return 1;

    return 0;                                       // if the values are equal return 0
}

