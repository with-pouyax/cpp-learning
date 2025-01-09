/* 
- here at first sight we will think that, there is no diffrence on member function (getNbInst)
- Actually there is a diffrence, but it is invisible here.
- earlier we heard that c++ is laying to us.
- in this case of non-member function, no arguments are passed to the function, so we can't use the this pointer to access the attributes
of the class. 
- so here in getNbInst we have no refrerence to _nbInst, howerever need to access it so we can return it.
- As our getNbInst function declared as public, it is accessible from outside the class.
- when we are refering to a member attribute or function, we need to use the this pointer to access it ( like this->_nbInst)
- when we are refering to a non-member attribute or function, we need to use the class name to access it (like Sample::_nbInst)

- one other thing to mention is that, now that _nbInst is non-member attribute, I want to initialize it in a constructor.
- what I want is  when my code starts running, when I don't have any instance of my class, I want this non-member attribute to be set to 0.
- for that I use int Sample::_nbInst = 0;
- is it count now as a global variable? no, it is still a class attribute, but it is a non-member attribute.
- but how can I set a  value to it when it is outside the class?
- it is because it is a static attribute, and static attributes can be initialized outside the class with this syntax (int Sample::_nbInst = 0;)
-


 */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample( void ) 
{
    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;

    return;
}

Sample::~Sample( void ) { 
    std::cout << "Destructor called" << std::endl;
    Sample::_nbInst -= 1;

    return;
}

int     Sample::getNbInst( void ) {
    return Sample::_nbInst;
}

int     Sample::_nbInst = 0;