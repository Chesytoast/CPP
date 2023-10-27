#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include <fstream>

class AForm{
    private:
		std::string const	_name;
		bool				_signed;
		int const			_requiredGradeSign;
		int	const			_requiredGradeExec;
        AForm();

    public:
		AForm(std::string name, int toSign, int toExec);
        AForm(AForm const& other); 
        AForm& operator=(const AForm& other);
        virtual ~AForm();

		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class FormNotSigned: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		std::string	getName()const;
		bool		getSigned()const;
		int			getToSign()const;
		int			getToExec()const;

		void			beSigned(Bureaucrat const& bur);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, AForm const& AForm);

#endif