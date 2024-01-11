/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:28 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/29 18:26:23 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include <string>

class Dog : public Animal{
    public :
        Dog();
        Dog(std::string type);
        Dog(const Dog &src); 
        Dog &operator=(const Dog &src);
        ~Dog();
        void setType(std::string newType);
        std::string getType();
        void makeSound();
};
#endif