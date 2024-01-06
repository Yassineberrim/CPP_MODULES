/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:28:09 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 16:18:01 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource :public IMateriaSource  {
    private :
        AMateria *materia[4];
        int count;
        std::string type;
    public :
        MateriaSource();
        MateriaSource(std::string type);
        MateriaSource(MateriaSource const &type);
        MateriaSource &operator=(const MateriaSource &src);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};