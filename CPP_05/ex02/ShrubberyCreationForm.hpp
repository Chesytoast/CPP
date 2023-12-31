#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
    private:
		std::string _target;
        ShrubberyCreationForm();
		
    public:
		ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const& other); 
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm();

		void    execute(Bureaucrat const & executor) const;
};

#endif