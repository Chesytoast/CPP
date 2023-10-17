#include "Cat.hpp"
#include "Dog.hpp"

int	main(){
	Animal *a = new Cat();
	Animal *b = new Dog();
	
	//cant because abstract class
	// Animal *c = new Animal();
	// c->makeSound();
	// delete c;
	
	a->makeSound();
	b->makeSound();
	delete a;
	delete b;
	return 0;
}