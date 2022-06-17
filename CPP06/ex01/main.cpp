#include "Serialization.hpp"

int main() {
	Data *A = new Data;
	A->num = 150;

	uintptr_t B = serialize(A);
	Data *C = deserialize(B);

	std::cout << A->num << std::endl;
	std::cout << C->num << std::endl;
	std::cout << &(A)->num << std::endl;
	std::cout << &(C)->num << std::endl;

	C->num = 200;

	std::cout << A->num << std::endl;
	std::cout << C->num << std::endl;
	std::cout << &(A)->num << std::endl;
	std::cout << &(C)->num << std::endl;
}