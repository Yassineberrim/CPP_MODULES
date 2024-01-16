#ifndef INTERN_HPP
# define INTERN_HPP


#include <iostream>
#include <string>

class Bureaucrat;
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const & src);
        AForm* makeForm(std::string nameform , std::string target);

};

#endif