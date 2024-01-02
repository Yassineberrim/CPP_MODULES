/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:26 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/01 10:55:56 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Default Called Dog" << std::endl;
    this->brain = new  Brain;
    this->type = "Dog";
}

Dog::Dog(const Dog &src){
    std::cout << "Copy Const Called" << std::endl;
    this->brain = NULL;
    *this = src;
}

Dog &Dog::operator=(const Dog &src){
    std::cout << "Coppy Assign Called Dog" << std::endl;
    if(this != &src){
        this->type = src.type;
        delete(brain);
        this->brain = new Brain(*src.brain);
    }
    return (*this);
}

Dog::Dog(std::string type){
    std::cout << "Parameta Const Dog" << std::endl;
    this->type = type;
    this->brain = new Brain;
}
Dog::~Dog(){
    std::cout << "Destructor Called dog " << std::endl;
    delete brain;
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