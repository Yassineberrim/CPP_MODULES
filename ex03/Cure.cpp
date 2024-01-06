/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:27 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 19:50:40 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    this->type = "cure";
}
Cure::Cure(Cure const &type){
    *this = type;
}
Cure &Cure::operator=(const Cure &src){
    if(this != &src)
        this->type = src.type;
    return (*this);
}
Cure::Cure(std::string type){
    this->type = type;
}
Cure::~Cure(){
}
AMateria *Cure::clone() const{
    return (new Cure());
}
void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() <<  "'s wounds " << std::endl;
}