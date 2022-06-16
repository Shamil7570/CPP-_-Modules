#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <limits>
# include <cmath>
# include <cctype>

class Convert
{
private:
    double value;
    std::string str;
public:
    Convert();
    Convert(std::string str);
    Convert(const Convert& obj);
    Convert &operator=(const Convert &obj);
    ~Convert();

    int		toInt() const;
	char	toChar() const;
	float	toFloat() const;
	double	toDouble() const;
	void 	converter() const;

	double	getValue() const;
	std::string	getStr() const;

	class ImpossibleException : public std::exception
	{
	public:
		virtual const char * what() const throw(){
            return ("impossible");
        }
	};

	class NonDisplayableException : public  std::exception
	{
	public:
		virtual const char * what() const throw(){
            return ("non display");
        }
	};
};



#endif