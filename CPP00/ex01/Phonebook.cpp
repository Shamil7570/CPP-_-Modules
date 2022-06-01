#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Phonebook::Phonebook(void){
	this->index = 0;
	this->is_full = false;
	return ;
}

Phonebook::~Phonebook(void){
	return ;
}

Contact Phonebook::getContact(int index){
	return this->contact[index]; 
}

void Phonebook::addContact(Contact contact){
	if (this->index == 8)
	{
		this->is_full = true;
		this->index = 0;
	}
	this->contact[index] = contact;
	this->index++;
}

int Phonebook::getIndex(){
	return this->index;
}

void Phonebook::printContact(){
	int j;

	if (is_full == true)
		j = 8;
	else
		j = this->index;
	for (int i = 0; i < j; i++)
	{
		std::cout
    		<< std::right << std::setw(10) << i << "|"
    		<< std::right << std::setw(10) << this->crop(this->contact[i].getFirstName(), 10) << "|"
    		<< std::right << std::setw(10) << this->crop(this->contact[i].getLastName(), 10) << "|"
			<< std::right << std::setw(10) << this->crop(this->contact[i].getNickName(), 10) << "|" << std::endl;
		std::cout << std::endl;
	}
}

