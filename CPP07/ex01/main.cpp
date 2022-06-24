#include "Iter.hpp"

template<typename T>
void print(const T& t)
{
    std::cout << t << std::endl;
}


int main(void){
    int a[5] = {1, 2, 3, 4, 5};
    iter(a, 5, print);

	std::string b[4] = {"Atlantis", "Plasma", "Oasis", "Void"};
	iter(b, 4, print);
}