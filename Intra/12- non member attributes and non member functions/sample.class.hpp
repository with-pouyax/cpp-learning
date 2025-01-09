/* 
- since the beginning we used member atributes and member functions of my class.
- if I intentionally inseast on member term, its just because there are non-member attributes and functions in my class
on the internet you will often see these referred to as instance variables and functions for member attributes and functions
- Together we saw that a member atribute or function was something present in the instance(in farsi: nemoone) of our class, it means that the class
need to be instanciated, for us to use this function or attribute. by instanciated I mean that we need to create an object of this class.
- another property (in farsi: khosusiat) of member attributes and functions is that each attribute will be diffrent in every instance.
- means that if I create two objects of the same class, each object will have its own copy of the attribute.
- so if I have two objects of the same class, and each object has an integer, if I change the integer in one object, the integer in the other
object will not be changed.
- Variables and functions that are exist at the class level and not at the instance level (means they not present in the instance of the class) 
are called non-member attributes and functions.
- now lets bring static keyword from C language to the game.
- in C language, static keyword is used to declare a variable or function that is not visible outside the file in which it is declared.
-  in C++ language, static has new semantics (in farsi: mafhoom).
- bellow I declare a non-member function using static keyword called getNbInst.
- I also declare a non-member attribute using static keyword called _nbInst.
- lets assume that we want a counter that allows us at any time to know how many instances of our class have been created.
- this information is makes sense only at the instance level, not at the class level.
- the class wants to know how many instances of itself have been created, for that we use static int _nbInst.
- since _nbInst is private, we need to provide a way to access it, so I declare a public static function called getNbInst to access it.
- 
 */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    Sample( void );
    ~Sample( void );

    static int     getNbInst( void );

private:

    static int     _nbInst;
};

#endif