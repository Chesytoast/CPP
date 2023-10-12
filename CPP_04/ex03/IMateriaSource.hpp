#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
    private:

    public:
        IMateriaSource();
        IMateriaSource(IMateriaSource const& other); 
        IMateriaSource& operator=(IMateriaSource const& other);
        
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif
