#include "Convert.hpp"

Convert::Convert(){}

Convert::~Convert(){}

Convert::Convert(std::string str) : value(std::strtod(str.c_str(), NULL)), str(str){
}

Convert::Convert(const Convert& obj){
    *this = obj;
}

Convert &Convert::operator=(const Convert &obj){
    this->value = obj.value;
    this->str = obj.str;
    return (*this);
}

std::string Convert::getStr() const{
    return this->str;
} 

double Convert::getValue() const{
    return this->value;
}

int Convert::toInt() const {

    int num;
	if (isalpha(str[0]))
		return static_cast<int>(str[0]);
	num = static_cast<int>(getValue());
    if (value == std::numeric_limits<double>::infinity() || value == -std::numeric_limits<double>::infinity() || std::isnan(value))
		throw ImpossibleException();
    return num;
}

char Convert::toChar() const
{
	char ch;
	if (isalpha(str[0]))
		return str[0];
	ch = static_cast<char>(getValue());
	if (ch == std::numeric_limits<double>::infinity() || ch == -std::numeric_limits<double>::infinity() || std::isnan(ch))
		throw Convert::ImpossibleException();
	else if (!(std::isprint(ch)))
		throw Convert::NonDisplayableException();
	return ch;
}

float Convert::toFloat() const
{
	float fl;
	if (isalpha(str[0]))
		return static_cast<float>(str[0]);
	fl = static_cast<float>(getValue());
	if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
		return static_cast<float>(str[1]);
	return fl;
}

double Convert::toDouble() const
{
	double d;
	if (isalpha(str[0]))
		return static_cast<float>(str[0]);
	d = static_cast<double>(getValue());
	return d;
}

void Convert::converter() const{
    char	ch;
	int		num;
	float	fl;
	double	d;

    try
	{
		ch = this->toChar();
		std::cout << "char: '" << ch  << "'"<< std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "char: " << ex.what() << std::endl;
	}
	try
	{
		num = this->toInt();
		std::cout << "int: " << num << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "int: " << ex.what() << std::endl;
	}
	try
	{
		fl = this->toFloat();
		std::cout <<"float: " << fl;
		if (fl - static_cast<int>(fl) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "float: " << ex.what() << std::endl;
	}
	try
	{
		d = this->toDouble();
		std::cout << "double: " << d;
		if (d - static_cast<int>(d) == 0)
			std::cout << ".0" << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "double: " << ex.what() << std::endl;
	}
}