/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 22:54:44 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 16:20:26 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "Default Constr Called " << std::endl;
    
}
AMateria::AMateria(std::string type){
    std::cout << "parame Constr Called " << std::endl;
    this->type = type;
}
AMateria::AMateria(const AMateria &src){
    std::cout << "copy  Called " << std::endl;
    *this = src;
}
AMateria &AMateria::operator=(const AMateria &src){
    std::cout << "Copy Asign " << std::endl;
    if(this != &src)
        this->type = src.type;
    return (*this);
}
AMateria::~AMateria(){
    std::cout << "Destructor is Called " << std::endl;
}
std::string  const & AMateria::getType() const{
    return (type);
}

void AMateria::use(ICharacter& target){
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}

void AMateria::use(ICharacter& target){
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}
