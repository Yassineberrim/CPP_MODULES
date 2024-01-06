/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:33 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 16:11:23 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Ice : virtual public AMateria{
    public :
        Ice();
        Ice(Ice const &type);
        Ice &operator=(const Ice &src);
        Ice(std::string type);
        ~Ice();
        AMateria *clone() const;
        void use(ICharacter& target);

};