/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:25:57 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 15:48:59 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){
    this->name = name;
    std::cout << "Paramter  Construct " << std::endl;
    /*À la construction, l’inventaire est vide*/
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
    std::cout << "Unequip " << std::endl;
    if(idx < 0 && idx >= 3)
        return;
    inv[idx] = NULL;
    int i = idx;
    while(i < 3)
    {
        inv[i] = inv[i + 1];
        i++;
    }
    inv[i] = NULL;
}
void Character::use(int idx, ICharacter& target){
    std::cout << "Use " << std::endl;
    if(idx < 0 && idx >= 3)
        return;
    inv[idx]->use(target);
}
void Character::equip(AMateria* m){
    std::cout << "Equip " << std::endl;
    int i = 0;
    while(i < 4)
    {
        if(inv[i] == NULL)
        {
            inv[i] = m;
            return;
        }
        i++;
    }
}


