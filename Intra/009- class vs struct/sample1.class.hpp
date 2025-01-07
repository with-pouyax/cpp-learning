/* 
- structers and classes are almost the same in C++.
- if we don't give a class a visibility keyword (public, private) it will be private by default.
- so the structers are public by default.
- can we use private and public keywords in structers?
- yes we can, but it is not common to use them in structers.
- can we also have public and private structers in c ?
- why we use classes in c++ instead of structers?
- because classes are more powerful than structers.
- we can use inheritance, polymorphism, encapsulation and abstraction in classes.
- we can't use them in structers.
- so we use classes in c++.
*/

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

struct Sample1 {

    int foo;


    Sample1( void );
    ~Sample1( void );

    void bar( void ) const;
};

#endif