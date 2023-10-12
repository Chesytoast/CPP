#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

int	main(){
	Animal *a = new Cat();
	Animal *b = new Dog();
	
	a->makeSound();
	b->makeSound();
	delete a;
	delete b;
	return 0;
}