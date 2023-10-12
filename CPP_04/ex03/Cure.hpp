#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
    private:
         std::string _type;
         
    public:
        Cure();
        Cure(Cure const& other); 
        Cure& operator=(Cure const& other);
        virtual ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);

};

#endif
