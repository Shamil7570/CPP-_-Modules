#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
private:
    unsigned int N;
    std::vector<int> arr;
    Span();
public:
    ~Span();
    Span(int num);
    Span(const Span &obj);
	Span &operator=(const Span &obj);
	void	addNumber(int num);
	void	displayInfo();
	int		longestSpan();
	int		shortestSpan();
};

#endif