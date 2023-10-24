#include "Form.hpp"

Form::Form(): _name("Default"), _signed(false), _requiredGradeSign(1), _requiredGradeExec(1){
    return ;
}

Form::Form(std::string name, int toSign, int toExec): _name(name), _signed(false), _requiredGradeSign(toSign), _requiredGradeExec(toExec) {
   if (toExec > 150 || toSign > 150){
        throw Form::GradeTooLowException();
	}
    if (toExec < 1 || toSign < 1){
        throw Form::GradeTooHighException();
    }
	return ;
}

Form::Form(const Form& other): _name(other._name), _signed(other._signed), _requiredGradeSign(other._requiredGradeSign), _requiredGradeExec(other._requiredGradeExec){
    return ;
}

Form& Form::operator=(const Form& other) {
    if (this == &other) {
        return *this; 
    }
	this->_signed = other._signed;
    return *this; 
}

Form::~Form(){
    return ;
}

std::string	Form::getName()const{
	return this->_name;
}

bool	Form::getSigned()const{
	return this->_signed;
}

int	Form::getToSign()const{
	return this->_requiredGradeSign;
}

int Form::getToExec()const{
	return this->_requiredGradeExec;
}

std::ostream&	operator<<(std::ostream& out, Form const& form){
	out << form.getSigned() << " Form: " << form.getName() << " required grade to sign: " << form.getToSign() << ", required grade to exec: " << form.getToExec();
	return out;
}

const char* Form::GradeTooHighException::what() const throw(){
    return ("grade too high");
}

const char* Form::GradeTooLowException::what() const throw(){
    return ("grade too low");
}

void	Form::beSigned(Bureaucrat const& bur){
	if (bur.getGrade() > this->_requiredGradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}