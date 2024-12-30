#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample { /*
                -class keyword is used to define a class.
                -Sample is the name of the class.
               */ 

public:        

    Sample( void );  //it allows me to define a constructor for the class.
    ~Sample( void ); //it allows me to define a destructor for the class.
                     //c++ use name of the class for the constructor and destructor.
                     // ~ is used to define a destructor.
                     // ~ is part of the name of the destructor.
                     // notice the same as functions in c, once class executed the local variables inside the class will be destroyed.
};

#endif