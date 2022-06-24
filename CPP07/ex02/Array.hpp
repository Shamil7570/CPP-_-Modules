#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<class T>
class Array
{
private:
	T               *arr;
	unsigned int    size;
public:
	Array<T>() : arr(NULL), size(0) {
		std::cout << "Zero constructor" << std::endl;
	};
	Array<T>(unsigned int size) {
		std::cout << "Size constructor" << std::endl;
		if (size == 0)
			arr = NULL;
		else
			this->arr = new T[size]();
		this->size = size;
	};
	Array<T>(const Array<T> &obj) {
		std::cout << "Copy constructor called" << std::endl;
		*this = obj;
	};
	~Array<T>() {
		if (this->arr)
			delete [](this->arr);
	};

	Array<T> &operator=(const Array<T> &obj) {
		std::cout << "Assignment operator" << std::endl;
		if (this == &obj)
			return (*this);
		if (this->arr)
			delete [](this->arr);
		this->size = obj.getSize();
		this->arr = new T[size]();
		for (unsigned int i = 0; i < this->size; i++) {
			this->arr[i] = obj[i];
		}
		return *this;
	};

	T &operator[](const unsigned int index) const {
		if (index < 0 || index >= size)
			throw std::range_error("Index out of bounds");
		return this->arr[index];
	}

	int	getSize() const {
		return this->size;
	};
};


#endif