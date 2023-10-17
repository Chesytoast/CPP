#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(){
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	// //full inventory
	// //3
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// //4
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// //full
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// delete tmp;
	// //full
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// delete tmp;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	//does nothing
	me->use(3, *bob);
	
	AMateria *a = new Ice();
	a->use(*bob);
	delete a;
	
	delete bob;
	delete me;
	delete src;
	return 0;
}