/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:22 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/01 12:01:14 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Default Called Cat " << std::endl;
    this->brain = new Brain;
}
Cat::Cat(const Cat &src){
    std::cout << "Copy Const Called cat" << std::endl;
    this->brain = NULL;
    *this = src;
}
Cat &Cat::operator=(const Cat &src){
    std::cout << "Coppy Assign Called cat " << std::endl;
    if(this != &src){
        this->type = src.type;
        delete(brain);
        this->brain = new Brain(*src.brain);
    }
    return (*this);
}
Cat::Cat(std::string type){
    std::cout << "Parameta Const cat" << std::endl;
    this->type = type;
    this->brain = new Brain;
}
Cat::~Cat(){
    std::cout << "Destructor Called cat " << std::endl;
    delete brain;
}
void Cat::setType(std::string type){
    this->type = type;
}
std::string Cat::getType(){
    return (type);
}

void Cat::makeSound(){
    std::cout << "Cat Sound" << std::endl;
}