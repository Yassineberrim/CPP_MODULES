/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:25:54 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 18:52:02 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include "AMateria.hpp"


class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inv[4];
        AMateria *floor[4];
    public:
        Character();
        Character(Character const &type);
        Character &operator=(const Character &src);
        Character(std::string type);
        ~Character();
        std::string  const & getName() const;
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void equip(AMateria* m) ;
};

#endif