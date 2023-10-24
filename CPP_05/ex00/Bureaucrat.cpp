#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("unemployed"), _grade(150){
    return ;
}

Bureaucrat::Bureaucrat(std::string const name, int const grade): _name(name){
    if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    if (grade < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name) {
    *this = other;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this == &other) {
        return *this; 
    }
    this->_grade = other._grade;
    return *this;
}

Bureaucrat::~Bureaucrat(){
    return ;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

std::string Bureaucrat::getName() const{
    return this->_name;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur){
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
    return out;
}

void	Bureaucrat::demote(){
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}

void	Bureaucrat::promote(){
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade too low");
}