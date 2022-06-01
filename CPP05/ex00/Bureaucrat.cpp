#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1) {
    std::cout << "Bureaucrat Default constructed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
    try
    {
        Bureaucrat::checkGrade(grade);
        this->grade = grade;
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
        this->grade = 150;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
        this->grade = 1;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.getName()){
    *this = obj;
}

Bureaucrat::~Bureaucrat(void){
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& obj){
    this->grade = obj.getGrade();
    return (*this);
}

int Bureaucrat::getGrade(void) const{
    return this->grade;
}

std::string Bureaucrat::getName(void) const{
    return this->name;
}

void Bureaucrat::decrementGrade(void){
    try
    {
        this->grade--;
        Bureaucrat::checkGrade(grade);
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
        this->grade = 150;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
        this->grade = 1;
    }
}

void Bureaucrat::incrementGrade(void){
    try
    {
        this->grade++;
        Bureaucrat::checkGrade(grade);
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
        this->grade = 150;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
        this->grade = 1;
    }
}

void	Bureaucrat::checkGrade(int grade) const
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &obj)
{
    ost  << obj.getName() << " Bureaucrat grade : " << obj.getGrade() << std::endl;
    return ost;
}