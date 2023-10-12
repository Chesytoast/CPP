#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(){
	Animal *a = new Cat();
	Animal *b = new Dog();
	Animal *c = new Animal();
	WrongAnimal *w = new WrongCat();
	
	w->makeSound();
	a->makeSound();
	b->makeSound();
	c->makeSound();
	delete a;
	delete b;
	delete c;
	delete w;
	return 0;
}