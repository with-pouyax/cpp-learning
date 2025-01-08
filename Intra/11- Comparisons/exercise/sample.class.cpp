#include "sample.class.hpp"

Sample::Sample ( int v ) : _foo(v)
{
    std::cout << "cunstructor called" << std::endl;

    return;
}

Sample::~Sample ( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Sample::getFoo(void) const
{
    return (this->_foo);
}

int Sample::compare(Sample *other) const
{
    if (getFoo() != other->getFoo())
        return -1;
    return 0;
}