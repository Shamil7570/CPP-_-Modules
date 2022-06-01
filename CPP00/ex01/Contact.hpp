#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact(void);
		~Contact(void);
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickName(std::string nick_name);
		void setPhoneNumber(std::string phone_namber);
		void setDarkestSecret(std::string darkest_secret);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
};

#endif
