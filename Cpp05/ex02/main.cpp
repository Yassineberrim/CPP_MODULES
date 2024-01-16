#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try{
        Bureaucrat b1("b1", 5);
        // std::cout << b1;
        // b1.incrementGrade();
        // std::cout << b1;
        // b1.decrementGrade();
        // std::cout << b1;
        // ShrubberyCreationForm f1("f1");
        // std::cout << f1;
        // f1.beSigned(b1);
        // std::cout << f1;
        // f1.execute(b1);
        // RobotomyRequestForm f2("f2");
        // f2.beSigned(b1);
        // f2.execute(b1);
        PresidentialPardonForm g63("Ra2iss");
        g63.beSigned(b1);
        std::cout << g63 ;
        g63.execute(b1);
        std::cout << g63;
        b1.executeForm(g63);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

