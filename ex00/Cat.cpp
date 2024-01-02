/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:22 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/29 18:33:43 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Default Called Cat " << std::endl;
}
Cat::Cat(const Cat &src){
    std::cout << "Copy Const Called cat" << std::endl;
    *this = src;
}
Cat &Cat::operator=(const Cat &src){
    std::cout << "Coppy Assign Called cat " << std::endl;
    if(this != &src){
        this->type = src.type;
    }
    return (*this);
}
Cat::Cat(std::string type){
    std::cout << "Parameta Const cat" << std::endl;
    this->type = type;
}
Cat::~Cat(){
    std::cout << "Destructor Called cat " << std::endl;
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