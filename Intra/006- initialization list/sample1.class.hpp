#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

class Sample1 {

public:

    char a1;                                            // a1 is a public attribute of the class
    int a2;
    float a3;          

    Sample1( char p1, int p2, float p3 );               // we create a constructor with 3 parameters (p1, p2, p3)    
    ~Sample1( void );
};

#endif