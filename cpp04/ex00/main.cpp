
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

 int main ()
 {
    std::cout << "\n~~~Wellcome to the Happy Animal Farm~~~\n" << std::endl;
    
    Animal monster("Cookie monster");
    monster.makeSound();
    std::cout << std::endl;
    Cat kitty;
    kitty.makeSound();
    std::cout << std::endl;
    

    Dog puppy;
    puppy.makeSound();
    return 0;
 }