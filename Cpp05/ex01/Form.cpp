/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:37:11 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/15 15:44:29 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const getGradeToSign , int gradeToExecute) : name(name), gradeToSign(getGradeToSign), gradeToExecute(gradeToExecute){
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    this->signedForm = false;
}

Form::Form(const Form &src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute){
    *this = src;
}

Form::~Form(){
}

Form &Form::operator=(const Form &rhs){
    if(this != &rhs)
        this->signedForm = rhs.signedForm;
    return(*this);
}

std::string const Form::getName() const{
    return(name);
}

bool Form::getSigned() const{
    return(signedForm);
}

int Form::getGradeToSign() const{
    return(gradeToSign);
}

int Form::getGradeToExecute() const{
    return(gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() > gradeToSign)
        throw Form::GradeTooLowException();
    if(signedForm == true)
        throw Form::FormAlreadySigned();
    signedForm = true;
}

const char *Form::GradeTooHighException::what() const throw(){
    return("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw(){
    return("Grade is too low");
}

const char *Form::FormAlreadySigned::what() const throw(){
    return("Form is already signed");
}

const char *Form::FormNotSigned::what() const throw(){
    return("Form is not signed");
}

std::ostream &operator<<(std::ostream &out, Form const &form){
    out << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is signed " << form.getSigned() << std::endl;
    return(out);
}

