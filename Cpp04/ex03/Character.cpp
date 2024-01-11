/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:25:57 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 20:02:25 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->name = "DEFAULT";
    /*À la construction, l’inventaire est vide*/
    int i = 0;
    while (i < 4)
        inv[i++] = NULL;
    int j = 0;
    while (j < 4)
        floor[j++] = NULL;
}

Character::Character(std::string name){
    this->name = name;
    /*À la construction, l’inventaire est vide*/
    int i = 0;
    while (i < 4)
        inv[i++] = NULL;
    int j = 0;
    while (j < 4)
        floor[j++] = NULL;
}
Character::Character(Character const &src){
    *this = src;
}
Character::~Character()
{
    std::cout << "Destructor*****" << std::endl;
    int i = 0;
    while (i < 4)
    {
        if (inv[i])
        {
            delete inv[i];
            std::cout << inv[i]->getType() << std::endl;
        }
        i++;
    }
}
/*

Obj1 = Obj2;

Obj2 into Obj1

Obj2 


*/
Character &Character::operator=(const Character &src){
    if(this == &src)
        return (*this);
    this->name = src.name;
    int i = 0;
    while(i < 4)
    {
        if (inv[i])
            delete inv[i];
        if (src.inv[i])
            inv[i] = src.inv[i]->clone();
        i++;
    }
    return (*this);
}
std::string  const & Character::getName() const{
    return(name);
}
void Character::unequip(int idx){
    if(idx < 0 && idx > 3)
        return;
    int i = 0;
    while(i < 4)
    {
        if (inv[i] == NULL)
        {
            inv[i] = floor[idx];
            floor[idx] = NULL;
            return;
        }
        i++;
    }
    
}
void Character::use(int idx, ICharacter& target){
    if(idx < 0 && idx >= 3)
        return;
    if(inv[idx])
        inv[idx]->use(target);
}
void Character::equip(AMateria* m){
    int i = 0;
    while(i < 4)
    {
        if(inv[i] == NULL)
        {
            std::cout << "Av" << std::endl;
            inv[i] = m;
            return;
        }
        i++;
    }
}


