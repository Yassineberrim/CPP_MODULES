/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:05 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/16 16:52:26 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target){
    this->target = target;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src){
    *this = src;
}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src){
    if (this != &src)
        this->target = src.target;
    return (*this);
}
std::string PresidentialPardonForm::getTarget() const{
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}


