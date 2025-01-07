/* 
- although we cant assign a value to a const variable after declaration, we can do it in the constructor of the class (as shown below).
- here (pi(f)) I am not assigning a value to the const variable pi, I am initializing my pi attribute to f value.

- there is also a second use of the const, I explaine it below the code.

 */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample( float const f ) : pi(f), qd(42)
{

    std::cout << "Constructor called" << std::endl;
    
    
    return;
}

Sample::~Sample( void ) { // here we define the destructor of the class Sample
    std::cout << "Destructor called" << std::endl;
    return; // optional to write.
}

void Sample::bar( void ) const {
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;
}

    //this->qd = 42;  //if you uncomment this line, the compiler will give you an error. }

/* 
- as you see on line 26, I am using the const keyword after the function declaration, 
but what does it mean? 
- I think thats the most important use of the const keyword in c++.
- if you look in sample.class.hpp, we also have a const keyword after the function declaration.
- in c++, when you place the const keyword after the function declaration, we are telling the compiler that this function will alter the current
instance of the class. 
- it means that this function will not change the attributes of the class instance that is calling it.
- in easier words, if I call the bar function in the main function, I will not be able to change the value of the attributes of the instance.
- as an example, if I try to change the value of the attribute qd in the bar function, the compiler will give me an error.
- if you declare a function that will not change the attributes of the class instance, please use the const keyword after the function.
- experience shows that this is a good practice to avoid bugs in the code.
 */