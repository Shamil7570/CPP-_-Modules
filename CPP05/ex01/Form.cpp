#include "Form.hpp"

Form::Form(std::string name, const int gradeSign, const int gradeExecute): name(name), is_signed(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	try
	{
		if (gradeSign < 1 || gradeExecute < 1)
			throw GradeTooHighException();
		else if (gradeSign > 150 || gradeExecute > 150)
			throw GradeTooLowException();
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

Form::Form(const Form &obj): name(obj.name), is_signed(obj.is_signed), gradeSign(obj.gradeSign), gradeExecute(obj.gradeExecute)
{
	*this = obj;
}

Form &Form::operator =(const Form& obj)
{
	this->is_signed = obj.is_signed;
	return *this;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
	return this->is_signed;
}

int Form::getGradeSign() const
{
	return this->gradeSign;
}

int Form::getGradeExecute() const
{
	return this->gradeExecute;
}

void Form::beSigned(Bureaucrat& bur)
{
	try
	{
		if (bur.getGrade() > gradeSign)
			throw GradeTooLowException();
		this->is_signed = true;
		std::cout<<"Bureaucrat: "<<bur<<" signed"<<std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout<< ex.what() <<std::endl;
	}
}

Form::~Form(){}

std::ostream & operator <<(std::ostream &ost, Form const & other)
{
	ost <<"Form: " << other.getName();
	if (other.getIsSigned())
		ost << " - is signed" <<std::endl;
	else
		ost << " couldn’t sign" <<std::endl;
	std::cout<<"Grade sign: "<<other.getGradeSign()<<std::endl;
	std::cout<<"Grade execute: "<< other.getGradeExecute()<<std::endl;

	return ost;
}