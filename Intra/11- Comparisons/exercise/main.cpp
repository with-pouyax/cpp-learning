#include "sample.class.hpp"


int main (void)
{
    Sample instance1 (42);
    Sample instance2 (42);

    if(&instance1 == &instance1)
        std::cout << "instance1 and instance1 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not physically equal" << std::endl;
    if(&instance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not physically equal" << std::endl;
    if(instance1.getFoo() == instance1.getFoo())
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal";
    if(instance1.getFoo() == instance2.getFoo())
        std::cout << "instance1 and instance2 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not structurally equal";

}