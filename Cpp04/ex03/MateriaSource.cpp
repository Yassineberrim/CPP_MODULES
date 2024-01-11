/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:28:07 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 18:01:36 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->i = 0;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    this->i = src.i;
    for (int i = 0; i < 4; i++)
        this->materia[i] = src.materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    this->i = src.i;
    for (int i = 0; i < 4; i++)
        this->materia[i] = src.materia[i];
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++){
        if(this->materia[i] != NULL)
            delete this->materia[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->i < 4)
    {
        this->materia[this->i] = m;
        this->i++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i]->getType() == type)
            return (this->materia[i]->clone());
    }
    return (NULL);
}
