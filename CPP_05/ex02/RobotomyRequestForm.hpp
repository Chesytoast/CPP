#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public AForm {
    private:
		std::string _target;
        RobotomyRequestForm();
		
    public:
		RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const& other); 
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        virtual ~RobotomyRequestForm();

		void    execute(Bureaucrat const & executor) const;
};

#endif