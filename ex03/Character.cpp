/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:25:57 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 18:26:06 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){
    this->name = name;
    content = new t_list;
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
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
            delete inv[i];
    }
    while(content){
        delete content->m;
        content = content->next;
    }
    
}

Character &Character::operator=(const Character &src){
    if(this == &src)
        return (*this);
    this->name = src.name;
    int i = 0;
    while(i < 4)
    {
        if (inv[i])
            inv[i] = src.inv[i]->clone();
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
    t_list tmp;
    tmp.m = inv[idx];
    tmp.next = NULL;
    while(content != NULL)
    {
        content = content->next;
    }
    content->next = &tmp;
    inv[idx] = NULL;
}
void Character::use(int idx, ICharacter& target){
    if(idx < 0 && idx >= 3)
        return;
    inv[idx]->use(target);
}
void Character::equip(AMateria* m){
    int i = 0;
    while(i < 4)
    {
        if(inv[i] == NULL)
        {
            inv[i] = m->clone();
            return;
        }
        i++;
    }
}


