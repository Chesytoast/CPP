#include "AForm.hpp"

AForm::AForm(): _name("Default"), _signed(false), _requiredGradeSign(1), _requiredGradeExec(1){
    return ;
}

AForm::AForm(std::string name, int toSign, int toExec): _name(name), _signed(false), _requiredGradeSign(toSign), _requiredGradeExec(toExec) {
   if (toExec > 150 || toSign > 150){
        throw AForm::GradeTooLowException();
	}
    if (toExec < 1 || toSign < 1){
        throw AForm::GradeTooHighException();
    }
	return ;
}

AForm::AForm(const AForm& other): _name(other._name), _signed(other._signed), _requiredGradeSign(other._requiredGradeSign), _requiredGradeExec(other._requiredGradeExec){
    return ;
}

AForm& AForm::operator=(const AForm& other) {
    if (this == &other) {
        return *this; 
    }
	this->_signed = other._signed;
    return *this; 
}

AForm::~AForm(){
    return ;
}

std::string	AForm::getName()const{
	return this->_name;
}

bool	AForm::getSigned()const{
	return this->_signed;
}

int	AForm::getToSign()const{
	return this->_requiredGradeSign;
}

int AForm::getToExec()const{
	return this->_requiredGradeExec;
}

std::ostream&	operator<<(std::ostream& out, AForm const& Aform){
	out << Aform.getSigned() << " AForm: " << Aform.getName() << " required grade to sign: " << Aform.getToSign() << ", required grade to exec: " << Aform.getToExec();
	return out;
}

const char* AForm::GradeTooHighException::what() const throw(){
    return ("grade too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
    return ("grade too low");
}

void	AForm::beSigned(Bureaucrat const& bur){
	if (bur.getGrade() > this->_requiredGradeSign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

void AForm::execute(Bureaucrat const & executor){
	if (executor.getGrade() > this->_requiredGradeExec)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}