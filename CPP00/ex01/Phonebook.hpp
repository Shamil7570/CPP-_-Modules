#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class Phonebook
{
private:
	Contact contact[8];
	int index;
	bool is_full;

public:
	Phonebook(void);
	~Phonebook(void);
	void addContact(Contact contact);
	void printContact();
	Contact getContact(int index);
	int getIndex();
	std::string	crop(std::string str, size_t width){
	if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	else
		return (str);
	};
};



#endif