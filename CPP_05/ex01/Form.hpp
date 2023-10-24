#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form{
    private:
		std::string const	_name;
		bool				_signed;
		int const			_requiredGradeSign;
		int	const			_requiredGradeExec;
        Form();

    public:
		Form(std::string name, int toSign, int toExec);
        Form(Form const& other); 
        Form& operator=(const Form& other);
        ~Form();

		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		std::string	getName()const;
		bool		getSigned()const;
		int			getToSign()const;
		int			getToExec()const;

		void	beSigned(Bureaucrat const& bur);
};

std::ostream& operator<<(std::ostream& out, Form const& form);

#endif