#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

int	main(){
	Cat cat;
	Animal *a = new Cat();
	Animal *b = new Dog();
	Animal *c = new Cat(cat);
	
	a->makeSound();
	b->makeSound();
	c->makeSound();
	delete a;
	delete b;
	delete c;
	return 0;
}