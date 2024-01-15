/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:46:27 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/15 13:26:55 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade)  : name(name), grade(grade){
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &src){
    *this = src;
}
Bureaucrat::~Bureaucrat(){
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs){
    if(this != &rhs)
        this->grade = rhs.grade;
    return(*this);
}
std::string const Bureaucrat::getName() const{
    return(name);
}
int Bureaucrat::getGrade() const{
    return(grade);
}

void Bureaucrat::incrementGrade(){
    if(grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade(){
    if(grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}


const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return(out);
}


