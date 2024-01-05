/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:31 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/05 17:15:46 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice Constructer" << std::endl;
    
}
Ice::Ice(Ice const &type){
    
}
Ice &Ice::operator=(const Ice &src){
    std::cout << "Ice Copy Asign" << std::endl;
    if()
}
Ice::Ice(std::string type){
    
}
Ice::~Ice(){
    
}
Ice *Ice::clone() const{
    
}
void Ice::use(ICharacter& target){
    
}