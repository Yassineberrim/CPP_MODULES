/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:31 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/05 19:19:03 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice Constructer" << std::endl;
    this->type = "ice";
}
Ice::Ice(Ice const &type){
    std::cout << "Ice Copy Const  Constructer" << std::endl;
    *this = type;
}
Ice &Ice::operator=(const Ice &src){
    std::cout << "Ice Copy Asign" << std::endl;
    if(this != &src)
        this->type = src.type;
    return (*this);
}
Ice::Ice(std::string type){
    std::cout << "Ice Param  Constructer" << std::endl;
    this->type = type;
}
Ice::~Ice(){
    std::cout << "Ice deconstructer Calle " << std::endl;
}
AMateria *Ice::clone() const{
    return (new Ice);
}
void Ice::use(ICharacter& target){
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}