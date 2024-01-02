/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:44:48 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/29 19:21:24 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "Default Wrong Parent" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type){
    std::cout << "paramet Constr called " << std::endl;
    this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src){
    std::cout << "copy Wrong const called" << std::endl;
    *this = src;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){
    std::cout << "copy Wrong parent assign called" <<std::endl;
    if(this != &src){
        this->type = src.type;
    }
    return(*this);
}
WrongAnimal::~WrongAnimal(){
    std::cout << "Deconst Wrong parent called" << std::endl;
}
void WrongAnimal::setType(std::string type){
        this->type = type;
}
std::string WrongAnimal::getType(){
    return(type);
}
void  WrongAnimal::makeSound(){
    std::cout << "to check this parent Wrong   " << std::endl;
}