/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 22:54:45 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 15:59:44 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "Character.hpp"
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(AMateria const & type);
        AMateria();
        AMateria(std::string type);
        AMateria(const AMateria &src); 
        AMateria &operator=(const AMateria &src);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif