#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form(_target, 145, 137){
    this->_target = _target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    Form::operator=(other);
    this->_target = other._target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other){
    this->_target = other._target;
}

void ShrubberyCreationForm::execute(Bureaucrat const& execotor) const{
    std::ofstream ost;

    try
    {
        if (!this->getIsSigned())
            throw FormIsNotSignedException();
        else if (this->getGradeExecute() < execotor.getGrade())
            throw GradeTooLowException();
        else{
            ost.open(this->_target + " _shrubbery");
            if (!ost.is_open()){
                std::cerr << "File open error!" << std::endl;
                return;
            }
            else{
                ost << "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯" << std::endl;
				ost << "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯" << std::endl;
				ost << "┈◯◯╰┻◯◯╋◯┻◯◯╯◯╯┈" << std::endl;
				ost << "┈┈╰━┓╰━┋┗━╯┣━╯┈┈" << std::endl;
				ost << "╱╲┈┈╰━┓┆┏┳━╯┈┈╱╲" << std::endl;
				ost << "┈┈╱╲┈┈┃┋┋┃┈┈┈╱┈┈" << std::endl;
				ost << "━━━━━━┻┻┻┻━━━━━━" << std::endl;
            }
            ost.close();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

