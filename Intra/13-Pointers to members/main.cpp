#include <iostream>
#include "sample.class.hpp"

int main( void ) {
    
    Sample instance;                            // here we have very simple instance of our class, which is in our stack.
                                                // stack is a memory space where we can store our variables, and it is very fast to access.
    Sample *instancep = &instance;              /* here I declare a pointer still on the stack and assigned it to another variable address
                                                   as a value.
                                                   - so we have a basic pointer just like in c.
                                                   - it is a pointer on a perticular type Sample and I assigned it to the address of my instance.
                                                   - so in memory we have a block called instancep of type Sample and it contains the address of instance.
                                                */    
                                                

    int Sample::*p = NULL;                       /* - here we are declaring a pointer on a member of type int of the class Sample.
                                                    - so is it mean that we are making a new mwember of the class Sample? no.
                                                    - it is just a pointer on a member inside the class Sample.
                                                    - and I initialized it to NULL because I don't want it to point to any member yet.
                                                 */
    void (Sample::*f)( void ) const;             /* 
                                                    - here we are declaring a pointer called f on a member function of the class Sample.
                                                    - here we specify the return type of the function we are pointing to is void.
                                                    - and the function we are pointing to is a member of the class Sample.
                                                    - and it is receiving no arguments.
                                                    - and it is a const function.
                                                    - the prototype of the function we are pointing to in the class Sample is:
                                                        void bar( void ) const;
                                                 */

    p = &Sample::foo;                            /*
                                                   - here we are assigning the address of the member foo of the class Sample to the pointer p.
                                                    - so now p is pointing to the member foo of the class Sample. 
                                                 */

    std::cout << "Value of member foo: " << instance.foo << std::endl; // here we are printing the value of the member foo of the instance.
    instance.*p = 21;                                                  
    /*
    1- instance.:
        -The . operator is used to directly access a member of an object (or instance) when you have the object itself (not a pointer to it).
        Here, instance is an object, so instance. means "Access a member of this object."
    2- *p:
        p is a pointer to a member of the class.
        *p dereferences p, meaning, "Get the member of the class that p is pointing to."
    3- instance.*p:
        This combines the two:
        It means, "Access the member of the object instance where the member is identified by the pointer p."
    4- = 21:
        After accessing the member, assign the value 21 to it.
    */
    std::cout << "Value of member foo: " << instance.foo << std::endl; // print it again.
    instancep->*p = 42;                                                
    /*
    1- instancep->:
        The -> operator is used to access a member of an object through a pointer.
        Here, instancep is a pointer to an object (or instance).
        So, instancep-> means, "Access a member of the object that instancep is pointing to."
    2- *p:
        p is a pointer to a member of the class.
        *p dereferences p, meaning, "Get the member of the class that p is pointing to."
    3- instancep->*p:
        This combines the two:
        It means, "Access the member of the object that instancep is pointing to, where the member is identified by the pointer p."
    4- = 42:
        After accessing the member, assign the value 42 to it.
    */
    std::cout << "Value of member foo: " << instance.foo << std::endl; // print it again.

    f = &Sample::bar;    // here we are assigning the address of the member function bar of the class Sample to the pointer f.
                         // we have declared f as a pointer on a member function of the class Sample at the beginning of the main function.

    (instance.*f)();     
    /* 
    - instance.*f:
        - instance is an object of the class Sample.
        - *f dereferences the pointer f, meaning, "Get the member function of the class that f is pointing to."
        - instance.*f means, "Access the member function of the object instance where the member function is identified by the pointer f."
    - so here we are calling the member function bar of the object instance.
     */
    (instancep->*f)();
    /* 
    - instancep->:
        - The -> operator is used to access a member of an object through a pointer.
        - Here, instancep is a pointer to an object (or instance).
        - So, instancep-> means, "Access a member of the object that instancep is pointing to."
    - *f:
        - f is a pointer to a member function of the class.
        - *f dereferences f, meaning, "Get the member function of the class that f is pointing to."
    - instancep->*f:
        - This combines the two:
        - It means, "Access the member function of the object that instancep is pointing to, where the member function is identified by the pointer f."
    - so here we are calling the member function bar of the object instancep.
     */

    return 0;
}