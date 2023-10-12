#include "Cat.hpp"
#include "Dog.hpp"

int	main(){

	// Animal *a = new Cat();
	// Animal *b = new Dog();
	// Animal *c = new Animal();
	
	// a->makeSound();
	// b->makeSound();
	// c->makeSound();
	// delete a;
	// delete b;
	// delete c;
	/*test to see if what is inside brain is well copied;*/
	
	// Brain b;
	// b.setIdea("po", 2);
	// Brain c;
	
	// c= b;
	// b.setIdea("fish", 2);
	// b.setIdea("fish", 0);
	// // int j = 100;
	// // std::cout << "brain idea "<< j << b.getIdea(j) << std::endl;
	// for (int i = 0; i < 10; ++i){
	// 	std::cout << "[" << i << "] " << b.getIdea(i) << std::endl;
	// }
	// std::cout << std::endl << "Test" << std::endl;
	// for (int i = 0; i < 10; ++i){
	// 	std::cout << "[" << i << "] " << c.getIdea(i) << std::endl;
	// }
	
	//test pour le contenu du brain de dog (deep copy)
	// Dog a;
	// Dog b;
	// Dog c(a);
	
	// a.tellIdeas(100);
	// std::cout << std::endl;
	// b.tellIdeas(7);
	// std::cout << std::endl;
	// a.modifIdeas(1,7, "fish");
	// b = a;
	// a.tellIdeas(7);
	// std::cout << std::endl;
	// b.tellIdeas(7);
	
	Animal *zoo[] = {
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat()
	};
	
	std::cout << std::endl;
	
	for (int i = 0; i < 4; ++i){
		delete zoo[i];
		std::cout << std::endl;
	}
	return 0;
}