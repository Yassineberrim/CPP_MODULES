/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:31 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 19:50:44 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    this->type = "ice";
}
Ice::Ice(Ice const &type){
    *this = type;
}
Ice &Ice::operator=(const Ice &src){
    if(this != &src)
        this->type = src.type;
    return (*this);
}
Ice::Ice(std::string type){
    this->type = type;
}
Ice::~Ice(){
}
AMateria *Ice::clone() const{
    return (new Ice());
}
void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}