
#include "AForm.hpp"

AForm::AForm(std::string const name, int const getGradeToSign , int gradeToExecute) : name(name), gradeToSign(getGradeToSign), gradeToExecute(gradeToExecute){
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->signedForm = false;
}

AForm::AForm(const AForm &src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute){
    *this = src;
}

AForm::~AForm(){
}

AForm &AForm::operator=(const AForm &rhs){
    if(this != &rhs)
        this->signedForm = rhs.signedForm;
    return(*this);
}

std::string const AForm::getName() const{
    return(name);
}

bool AForm::getSigned() const{
    return(signedForm);
}

int AForm::getGradeToSign() const{
    return(gradeToSign);
}

int AForm::getGradeToExecute() const{
    return(gradeToExecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() > gradeToSign)
        throw AForm::GradeTooLowException();
    if(signedForm == true)
        throw AForm::FormAlreadySigned();
    signedForm = true;
}

const char *AForm::GradeTooHighException::what() const throw(){
    return("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw(){
    return("Grade is too low");
}

const char *AForm::FormAlreadySigned::what() const throw(){
    return("Form is already signed");
}

const char *AForm::FormNotSigned::what() const throw(){
    return("Form is not signed");
}

std::ostream &operator<<(std::ostream &out, AForm const &form){
    out << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is signed " << form.getSigned() << std::endl;
    return(out);
}

