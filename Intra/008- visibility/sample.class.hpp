/* 
- what is public keyword in c++?
- we have public and private, what are they?
- they will allow me to control the encapsulation of members of a class
- meaning the attributes and member functions that will only be visible from inside the class or from outside the class
- when we define public functions or attributes, it will be possible to access them from inside the class and from outside the class
- However when we define private functions or attributes, it will only be possible to access them from inside the class and they will be invisible.
and inaccesible from outside the class.
- like this we can control what parts of the class we give the user access to.
 */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    int publicFoo;

    Sample( void );
    ~Sample( void );

    void publicBar( void ) const;

private:

    int _privateFoo;  // it is a good practice to put an underscore before the name of the private attributes and functions
                      // some people underline after the name of the private attributes and functions

    void _privateBar( void ) const;
};

#endif