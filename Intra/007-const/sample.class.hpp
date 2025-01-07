/* 
- as we learned in c, we need to we initialize a const, we have to give it a value at the time of declaration (same line).
 */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    float const pi;
    int qd;

    Sample( float const f );
    ~Sample( void );

    void bar( void ) const;
};

#endif