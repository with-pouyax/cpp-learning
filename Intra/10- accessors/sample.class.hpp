/* 
- we know that normally  attributes of a class are private
- However, we would like to know the value of some attributes or even modify them
- But to avoid any misuse and mess in our class, we want to offer proxy functions.
- that would be the interface between the user and our private attributes.
- These little reading and writing functions are called accessors.
- They are usually use prefix(in farsi: پیشوند) get and set.
- Thy allow to get and set the value of an attribute.
- Below we have an attribute _foo and it is private, because we don't want user to directly access it.
- However, I want him to have a certain access over which I can control.
- For that we have two functions getFoo and setFoo in public section.
- normally we name these functions get and set followed by the name of the attribute.
- we add const to the getFoo function because it is a read-only function.
-
 */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

    Sample( void );
    ~Sample( void );

    int     getFoo( void ) const;
    void    setFoo( int v );

private:

    int     _foo;
};

#endif