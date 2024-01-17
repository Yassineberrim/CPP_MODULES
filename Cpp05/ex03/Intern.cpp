#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(Intern const & src) {
    *this = src;
}

Intern::~Intern() {

}

Intern & Intern::operator=(Intern const & src) {
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}

Intern::Intern() {
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}

AForm* Intern::makeForm(std::string nameform, std::string target)
{
  std :: string Name[3] = {"presidential request","robotomy request", " shrubbery request"};
  int i = 0;
  for (i = 0 ; i < 3; i++)
    {
        if (Name[i] == nameform)  
            break;
    }
    switch(i)
    {
        case 0 : 
            std::cout << "Intern creates " << nameform << std::endl;
            return(new PresidentialPardonForm(target));
        case 1 :
            return(new RobotomyRequestForm(target));
            std::cout << "Intern creates " << nameform << std::endl;
        case 2 :
            return(new ShrubberyCreationForm(target));
            std::cout << "Intern creates " << nameform << std::endl;
        default :
            throw Intern::FormNotFound();
    }
    return (NULL);
}