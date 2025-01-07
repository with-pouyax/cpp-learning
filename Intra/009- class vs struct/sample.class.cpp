

#include <iostream>
#include "sample1.class.hpp"
#include "sample2.class.hpp"

Sample1::Sample1( void ) 
{
    std::cout << "Constructor for Sample1 called" << std::endl;
    return ;
}

Sample1::~Sample1( void ) 
{
    std::cout << "Destructor for Sample1 called" << std::endl;
    return ;
}

Sample2::Sample2( void ) 
{
    std::cout << "Constructor for Sample2 called" << std::endl;
    return ;
}

Sample2::~Sample2( void ) 
{
    std::cout << "Destructor for Sample2 called" << std::endl;
    return ;
}

