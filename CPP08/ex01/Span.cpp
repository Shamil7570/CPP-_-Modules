#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(int count): N(count) {}

Span::~Span() {};

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
	this->N = obj.N;
    this->arr = obj.arr;
	return (*this);
}

void Span::addNumber(int num)
{
    if (arr.size() == N)
        throw std::range_error("Storage is full");
    this->arr.push_back(num);
}

void	Span::displayInfo()
{
	std::vector<int>::iterator it = arr.begin();
	std::vector<int>::iterator ite = arr.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		*it++;
	}
	std::cout << std::endl;
}

int Span::longestSpan()
{
    if (arr.size() < 2)
        throw std::logic_error("Few elements");
    std::vector<int>::iterator min;
    std::vector<int>::iterator max;
    max = std::max_element(arr.begin(), arr.end());
    min = std::min_element(arr.begin(), arr.end());
    return (*max - *min);
}

int Span::shortestSpan()
{
    int min = INT_MAX;
    int tmp;
    if (arr.size() < 2)
        throw std::logic_error("Few elements");
    std::sort(arr.begin(), arr.end());
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        tmp = arr[i + 1] - arr[i];
        if (tmp < min)
            min = tmp;
    }
    return min;
}