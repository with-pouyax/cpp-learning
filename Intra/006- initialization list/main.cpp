#include <iostream>
#include "sample1.class.hpp"
#include "sample2.class.hpp"

int main( void ) 
{
    Sample1 instance1('a', 42, 4.2f);              // here we create an instance of the class Sample1 with the values 'a', 42, 4.2f
    Sample2 instance2('z', 24, 3.14f);

    return 0;
}