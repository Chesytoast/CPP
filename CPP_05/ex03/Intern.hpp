#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
    private:

    public:
        Intern();
        Intern(Intern const& other); 
        Intern& operator=(Intern const& other);
        ~Intern();
        
        class BadFormException : public std::exception {
            public:
				virtual const char* what() const throw();
        };
        
        AForm*    makeForm(std::string form, std::string target);
};

#endif
