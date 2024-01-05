/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:29 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/05 19:01:00 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Cure : public AMateria{
    public :
        Cure();
        Cure(Cure const &type);
        Cure &operator=(const Cure &src);
        Cure(std::string type);
        ~Cure();
        AMateria *clone() const;
        void use(ICharacter& target);

};