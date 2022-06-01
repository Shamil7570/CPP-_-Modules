#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat one("Mike", -2);
    one.decrementGrade();
    std::cout << one << std::endl;
    one.decrementGrade();
    std::cout << one << std::endl;

    Bureaucrat two("Jo", 149);
    std::cout << two << std::endl;
    two.incrementGrade();
    std::cout << two << std::endl;
    two.incrementGrade();
    std::cout << two << std::endl;
}