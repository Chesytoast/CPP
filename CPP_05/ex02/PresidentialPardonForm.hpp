#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    private:
		std::string _target;
        PresidentialPardonForm();
		
    public:
		PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const& other); 
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        virtual ~PresidentialPardonForm();

		void    execute(Bureaucrat const & executor) const;
};

#endif