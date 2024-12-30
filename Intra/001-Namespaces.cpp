#include <stdio.h>

int gl_var = 1; // global variable
int f(void) {return 2;}

namespace Foo  // namespace definition
{
    int gl_var = 3; // a variable in the namespace considered as a global variable
    int f(void) {return 4;}
}

namespace Bar 
{
    int gl_var = 3;
    int f(void) {return 4;}
}

namespace Muf = Bar;                                 // aliasing the namespace Bar to Muf, it is like Bar is an alias for Muf

int main(void) 
{
    printf("gl_var:         [%d]\n", gl_var);        // prints the global variable gl_var
    printf("f():            [%d]\n\n", f());         // prints the return value of the function f()

    printf("Foo::gl_var:    [%d]\n", Foo::gl_var);   // prints the variable gl_var in the namespace Foo
    printf("Foo::f():       [%d]\n\n", Foo::f());    // prints the return value of the function f() in the namespace Foo

    printf("Bar::gl_var:    [%d]\n", Bar::gl_var);
    printf("Bar::f():       [%d]\n\n", Bar::f());

    printf("::gl_var:       [%d]\n", ::gl_var);      // prints the global variable gl_var, here we didn't specify the namespace so it will
    printf("::f():          [%d]\n\n", ::f());

    return 0;
}