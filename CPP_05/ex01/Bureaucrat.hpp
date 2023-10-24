#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat{
    private:
        std::string const   _name;
        int                 _grade;
        Bureaucrat();

    public:
        Bureaucrat(std::string const name, int const grade);
        Bureaucrat(Bureaucrat const& other); 
        Bureaucrat& operator=(Bureaucrat const& other);
        ~Bureaucrat();
        
        std::string getName() const;
        int getGrade() const;
        void    promote();
        void    demote();
        
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw();
        };

		void	signForm(Form& form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur);

#endif
