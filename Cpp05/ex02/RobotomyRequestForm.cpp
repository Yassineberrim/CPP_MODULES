#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), target(src.target){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src){
    AForm::operator=(src);
    return *this;
}

std::string RobotomyRequestForm::getTarget() const{
    return this->target;
}
