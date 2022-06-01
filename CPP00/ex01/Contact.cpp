#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	return ;
}

Contact::~Contact(void){
	return ;
}

void Contact::setFirstName(std::string firstname){
	this->first_name = firstname;
}

void Contact::setLastName(std::string lastname){
	this->last_name = lastname;
}

void Contact::setNickName(std::string nickname){
	this->nick_name = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber){
	this->phone_number = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret){
	this->darkest_secret = darkestsecret;
}

std::string Contact::getFirstName(void){
	return this->first_name;
}

std::string Contact::getLastName(void){
	return this->last_name;
}

std::string Contact::getNickName(void){
	return this->nick_name;
}

std::string Contact::getPhoneNumber(void){
	return this->phone_number;
}

std::string Contact::getDarkestSecret(void){
	return this->darkest_secret;
}