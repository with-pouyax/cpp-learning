#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    int foo;           // here we declare an attribute (variable) called foo of type int.

    Sample( void );
    ~Sample( void );

    void bar( void );  // here we declare a member function called bar that takes no arguments and returns nothing.

    /* 
    - The declaration will be executed only when the class goes out of scope or when the object is deleted (if created dynamically using new).
    - thats why it doesn't matter in which order you declare the attributes and member functions in the class. the declaration
    will be executed always at the end of the class.
     */
};

#endif