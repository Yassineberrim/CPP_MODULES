/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:25:57 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/05 20:46:45 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name){
    std::cout << "Paramter  Construct " << std::endl;
    int i = 0;
    while (i < 4)
        inv[i++] = NULL;
}
Character::Character(Character const &src){
    *this = src;
}
Character::~Character()
{
    int i = 0;
    while (i < 4)
        delete inv[i++];
}

Character &Character::operator=(const Character &src){
    if(this == &src)
        return (*this);
    this->name = src.name;
    int i = 0;
    while(i < 4)
    {
        inv[i] = src.inv[i];
        i++;
    }
    return (*this);
}
std::string  const & Character::getName() const{
    return(name);
}
void Character::unequip(int idx){
    if(idx < 0 && idx >= 3)
        return;
    if(!inv[idx])
        return;
    inv[idx] = NULL;
    
    
}
void Character::use(int idx, ICharacter& target){
    
}
void Character::equip(AMateria* m){
    
}