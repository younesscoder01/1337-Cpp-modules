#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& other);
    std::string getType() const ;
    void setType(std::string _type);
    void makeSound() const;
};

#endif