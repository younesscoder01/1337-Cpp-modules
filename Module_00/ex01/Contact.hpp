#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string> 
#include <iomanip>

class Contact {
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public :
        int set_data(void);
        void put_data(int index);
        void put_all_data(void);
};

#endif