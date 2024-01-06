/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:28:07 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/06 16:21:01 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->count = 0;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    this->count = src.count;
    for (int i = 0; i < 4; i++)
        this->materia[i] = src.materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    this->count = src.count;
    for (int i = 0; i < 4; i++)
        this->materia[i] = src.materia[i];
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        delete this->materia[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->count < 4)
    {
        this->materia[this->count] = m;
        this->count++;
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
