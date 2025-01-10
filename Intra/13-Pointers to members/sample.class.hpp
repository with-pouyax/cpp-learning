/* 
- you already learned pointers in c.
- pointers and pointers on functions are still valid in c++.
- but c++ they come with 2 new friends: 1- pointers on members and 2- pointers on members functions.
 */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    int            foo;

    Sample( void );
    ~Sample( void );

    void           bar( void ) const;
};

#endif