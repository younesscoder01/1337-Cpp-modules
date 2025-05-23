#include "Harl.hpp"

void Harl::debug() {
    std::cout << "[ DEBUG ]"<< std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]"<< std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]"<< std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]"<< std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){

    void (Harl::*fptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (level != complains[i] && i < 4)
        i++;
    while (i >= 4)
        return ;
    (this->*fptr[i])();
}