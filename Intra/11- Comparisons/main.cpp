#include <iostream>
#include "sample.class.hpp"

int main( void ) 
{
    Sample instance1( 42 );                                                                 // initialize instance1 with 42
    Sample instance2( 42 );                                                                 // initialize instance2 with 42                      

    if (&instance1 == &instance1)                                                           // if the address of instance1 is equal to the address of instance1
        std::cout << "instance1 and instance1 are physically equal" << std::endl;               // print that they are physically equal
    else                                                                                    // if not
        std::cout << "instance1 and instance1 are not physically equal" << std::endl;           // print that they are not physically equal

    if (&instance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not physically equal" << std::endl;
    
    if  (instance1.compare(&instance1) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

    if  (instance1.compare(&instance2) == 0)
        std::cout << "instance1 and instance2 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not structurally equal" << std::endl;

    return 0;
}