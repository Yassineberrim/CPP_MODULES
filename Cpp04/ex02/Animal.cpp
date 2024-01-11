/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:21:12 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/01 15:49:18 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Default Called Parent" << std::endl;
}
Animal::Animal(const Animal &src){
    std::cout << "Copy Const Called" << std::endl;
    *this = src;
}
Animal &Animal::operator=(const Animal &src){
    std::cout << "Coppy Assign Called" << std::endl;
    if(this != &src){
        this->type = src.type;
    }
    return (*this);
}
Animal::Animal(std::string type){
    std::cout << "Parameta Const" << std::endl;
    this->type = type;
}
Animal::~Animal(){
    std::cout << "Destructor Called  Parent" << std::endl;
}
void Animal::setType(std::string type){
    this->type = type;
}
std::string Animal::getType(){
    return (type);
}
