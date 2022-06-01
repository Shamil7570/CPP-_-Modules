#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
	int index;
	Contact contact;
	Phonebook phonebook;
	std::string cmd;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkest_secret;

	while (1){
		std::cout << "List of commands" << std::endl;
		std::cout << "1: ADD" << std::endl;
		std::cout << "2: SEARCH" << std::endl;
		std::cout << "3: EXIT" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD" || cmd == "1"){
			std::cout << "First name:" <<std::endl;
			std::cin >> firstname;
			contact.setFirstName(firstname);
			std::cout << "Last name:" <<std::endl;
			std::cin >> lastname;
			contact.setLastName(lastname);
			std::cout << "Nick name:" <<std::endl;
			std::cin >> nickname;
			contact.setNickName(nickname);
			std::cout << "Phone number:" <<std::endl;
			std::cin >> phonenumber;
			contact.setPhoneNumber(phonenumber);
			std::cout << "Darkest secret:" <<std::endl;
			std::cin >> darkest_secret;
			contact.setDarkestSecret(darkest_secret);		
			phonebook.addContact(contact);			
		}
		else if (cmd == "SEARCH" || cmd == "2")
		{
			std::cout
    			<< std::right << std::setw(10) << "index" << "|"
    			<< std::right << std::setw(10) << "firstname" << "|"
    			<< std::right << std::setw(10) << "lastname" << "|"
    			<< std::right << std::setw(10) << "nickname" << "|" << std::endl;
			phonebook.printContact();
			while (1)
			{
				std::cout << "Contact index :" << std::endl;
				std::cin >> index;
				if (index == 99)
					break;
				if (index < phonebook.getIndex() && index <= 8 && index >= 0) {
					std::cout << "First name:     " + phonebook.getContact(index).getFirstName() << std::endl;
					std::cout << "Last name:      " + phonebook.getContact(index).getLastName() << std::endl;
					std::cout << "Nick name:      " + phonebook.getContact(index).getNickName() << std::endl;
					std::cout << "Phone number:   " + phonebook.getContact(index).getPhoneNumber() << std::endl;
					std::cout << "Darkest secret: " + phonebook.getContact(index).getDarkestSecret() << std::endl;
					break;
				}
				else {
					std::cout << "Index Error : " << std::endl;
				}
			}
		}
		else if (cmd == "EXIT" || cmd == "3")
			return (0);
	}
	return (0);
}