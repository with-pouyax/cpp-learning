/* 
- in c if we use comparison operators (==, !=, <, >, <=, >=) if we use == operator, it allows us to address comparison between two structures.
- if two structures have fields with the same values, but different addresses, meaning two different instances (in farsi: نمونه) of the same
structure, the comparison will return false.
- it is the same in c++, however, we will be able to use member functions to add to our class a compare bracket function.
- That will allow us to make a structure comparison on two different instances and then check if they are equal or not.
- 
 */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    Sample( int v );                               // constructor with parameter v
    ~Sample( void );

    int     getFoo( void ) const;                 // getter for _foo
    int    compare( Sample * other ) const;       // compare function to compare two instances of the same class

private:

    int     _foo;
};

#endif