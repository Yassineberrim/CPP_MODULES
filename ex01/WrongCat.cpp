/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:40:37 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/29 19:24:23 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "Default Const of Wrongcat" << std::endl;
}

WrongCat::WrongCat(std::string type){
    std::cout << "paramet const of Wrongcat " << std::endl;
    this->type = type;
}

WrongCat::WrongCat(const WrongCat &src){
    std::cout << "copy Const called of Wrongcat" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src){
    std::cout << "Copy Assig Wrongcat Called" << std::endl;
    if(this != &src){
        this->type = src.type;
    }
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "Deconst Wrongcat called" << std::endl;
}

void WrongCat::setType(std::string Type){
    this->type = Type;
}

std::string WrongCat::getType(){
    return(type);
}

void  WrongCat::makeSound(){
    std::cout << "to check this  Wrongcat " << std::endl;
}