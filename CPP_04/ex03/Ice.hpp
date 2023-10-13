#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria{
    private:

    public:
        Ice();
        Ice(Ice const& other); 
        Ice& operator=(Ice const& other);
        virtual ~Ice();
        void use(ICharacter& target);
        AMateria* clone() const;

};

#endif
