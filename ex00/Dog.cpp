/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:26 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/29 18:32:55 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Default Called Dog" << std::endl;
}
Dog::Dog(const Dog &src){
    std::cout << "Copy Const Called" << std::endl;
    *this = src;
}
Dog &Dog::operator=(const Dog &src){
    std::cout << "Coppy Assign Called Dog" << std::endl;
    if(this != &src){
        this->type = src.type;
    }
    return (*this);
}
Dog::Dog(std::string type){
    std::cout << "Parameta Const Dog" << std::endl;
    this->type = type;
}
Dog::~Dog(){
    std::cout << "Destructor Called dog " << std::endl;
}
void Dog::setType(std::string type){
    this->type = type;
}
std::string Dog::getType(){
    return (type);
}

void Dog::makeSound(){
    std::cout << "Dog Sound" << std::endl;
}