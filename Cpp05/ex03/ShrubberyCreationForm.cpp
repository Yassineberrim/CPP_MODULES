#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",145,137),target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) , target(src.target){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
    AForm::operator=(src);
    return(*this);
}
std::string ShrubberyCreationForm::getTarget() const{
    return(this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->getGradeToExecute())
    {
        std::ofstream file;
        file.open(this->target + "_shrubbery");
        if(file.is_open())
        {
            file << "                                                         ." <<std::endl;
            file << "                                      .         ;  " <<std::endl;
            file << "         .              .              ;%     ;;   " <<std::endl;
            file << "           ,           ,                :;%  %;   " <<std::endl;
            file << "           :         ;                   :;%;'     .,   " <<std::endl;
            file << "   ,.        %;     %;            ;        %;'    ,;" <<std::endl;
            file << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" <<std::endl;
            file << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " <<std::endl;
            file << "       ;%;      %;        ;%;        % ;%;  ,%;'" <<std::endl;
            file << "        `%;.     ;%;     %;'         `;%%;.%;'" <<std::endl;
            file << "         `:;%.    ;%%. %@;        %; ;@%;%'" <<std::endl;
            file << "            `:%;.  :;bd%;          %;@%;'" <<std::endl;
            file << "             `@%:.  :;%.         ;@@%;'   " <<std::endl;
            file << "                `@%.  `;@%.      ;@@%;         " <<std::endl;
            file << "                  `@%%. `@%%    ;@@%;        " <<std::endl;
            file << "                    ;@%. :@%%  %@@%;       " <<std::endl;
            file << "                      %@bd%%%bd%%:;     " <<std::endl;
            file << "                        #@%%%%%:;;" <<std::endl;
            file << "                        %@@%%%::;" <<std::endl;
            file << "                        %@@@%(o);  . '         " <<std::endl;
            file << "                        %@@@o%;:(.,'         " <<std::endl;
            file << "                    `.. %@@@o%::;      " <<std::endl;   
            file << "                       `)@@@o%::;      " <<std::endl;   
            file << "                        %@@(o)::;      " <<std::endl;  
            file << "                       .%@@@@%::;        " <<std::endl; 
            file << "                       ;%@@@@%::;.        " <<std::endl;  
            file << "                      ;%@@@@%%:;;;. " <<std::endl;
            file << "                  ...;%@@@@@%%:;;;;,.." <<std::endl;
        }
        file.close();
    }
}