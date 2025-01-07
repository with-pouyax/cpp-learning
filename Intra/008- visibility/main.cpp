#include <iostream>
#include "sample.class.hpp"

int main( void ) 
{
    Sample instance; 
    
    instance.publicFoo = 42;
    std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
    //instance._privateFoo = 42;                                                        //we can't access the private attribute
    //std::cout << "instance._privateFoo = " << instance._privateFoo << std::endl;      //we can't access the private attribute

    instance.publicBar();
    //instance._privateBar();                                                           //we can't access the private function
    
    return 0;
}