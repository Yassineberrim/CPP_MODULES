/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:28 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/30 17:21:41 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal{
    private:
        Brain *brain;
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