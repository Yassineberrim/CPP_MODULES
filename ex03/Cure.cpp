/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:27 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/05 19:18:36 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    std::cout << "Cure Constructer" << std::endl;
    this->type = "cure";
}
Cure::Cure(Cure const &type){
    std::cout << "Cure Copy Const  Constructer" << std::endl;
    *this = type;
}
Cure &Cure::operator=(const Cure &src){
    std::cout << "Cure Copy Asign" << std::endl;
    if(this != &src)
        this->type = src.type;
    return (*this);
}
Cure::Cure(std::string type){
    std::cout << "Cure Param  Constructer" << std::endl;
    this->type = type;
}
Cure::~Cure(){
    std::cout << "Cure deconstructer Calle " << std::endl;
}
AMateria *Cure::clone() const{
    return (new Cure);
}
void Cure::use(ICharacter& target){
    std::cout << " shoots an Cure bolt at " << target.getName() << std::endl;
}