/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 22:54:44 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 17:50:12 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    
}
AMateria::AMateria(std::string type){
    this->type = type;
}
AMateria::AMateria(const AMateria &src){
    *this = src;
}
AMateria &AMateria::operator=(const AMateria &src){
    if(this != &src)
        this->type = src.type;
    return (*this);
}
AMateria::~AMateria(){
}
std::string  const & AMateria::getType() const{
    return (type);
}

void AMateria::use(ICharacter& target){
    (void)target;
    std::cout << "Use : " << std::endl;
    
}
