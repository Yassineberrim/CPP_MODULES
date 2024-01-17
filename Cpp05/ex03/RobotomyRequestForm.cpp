#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target){
   
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), target(src.target){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src){
    AForm::operator=(src);
    return *this;
}

std::string RobotomyRequestForm::getTarget() const{
    return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if(executor.getGrade() <= this->getGradeToExecute())
    {
        std::cout << "make some drilling noises" << std::endl;
        if (rand() % 2)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->target << " robotomization failed" << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}
