#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form form("form", 3, 3);
	Bureaucrat bob("bob", 0);
	form.beSigned(bob);
	std::cout << form;
    return 0;
}