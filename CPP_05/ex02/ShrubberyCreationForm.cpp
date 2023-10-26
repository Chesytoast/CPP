#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", 145, 137){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery", 145, 137), _target(target){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm("Shrubbery", 145, 137){
    *this = other;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this == &other) {
        return *this; 
    }
	this->_target =  other._target;
    return *this; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    return ;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
   AForm::execute(executor);
   std::ofstream ofs;
   std::string outfile(this->_target);
   outfile.append("_shrubbery");
   
   ofs.open(outfile.c_str());
   ofs << "      ccee88oo" << std::endl;
   ofs << "  C8O8O8Q8PoOb o8oo" << std::endl;
   ofs << " dOB69QO8PdUOpugoO9bD" << std::endl;
   ofs << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
   ofs << "    6OuU  /p u gcoUodpP" << std::endl;
   ofs << "      \\\\\\//  /douUP" << std::endl;
   ofs << "        \\\\\\////" << std::endl;
   ofs << "         |||/\\\\" << std::endl;
   ofs << "         |||\\/" << std::endl;
   ofs << "         |||||" << std::endl;
   ofs << "   .....//||||\\...." << std::endl;
   ofs.close();
}