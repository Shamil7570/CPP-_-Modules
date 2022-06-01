#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();
    void wrongMakeSound() const;
    virtual std::string getWrongType() const;
protected:
    std::string wrongType;
};


#endif
