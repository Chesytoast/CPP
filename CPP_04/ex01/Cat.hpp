#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain*  _brain;
        
    public:
        Cat();
        Cat(const Cat& other); 
        Cat& operator=(const Cat& other);
        ~Cat();
        void    makeSound();
        void    modifIdeas(int start, int end, std::string idea);
        void    tellIdeas(int nb)const;
};

#endif
