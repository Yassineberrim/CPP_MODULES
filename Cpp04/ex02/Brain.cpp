/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:47:34 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/01 11:01:11 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain Called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "b";
}

Brain::Brain(const Brain &src)
{
    std::cout << "Copy Construc Brain Called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Coppy assign Brain Called" << std::endl;
    if(this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Deconstruc Brain Called" << std::endl;    
}

void Brain::setIdea(std::string idea)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

std::string Brain::getIdea(int i)
{
    return this->ideas[i];
}