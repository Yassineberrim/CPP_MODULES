/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:40:35 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/29 19:26:53 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public :
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &src); 
        WrongCat &operator=(const WrongCat &src);
        ~WrongCat();
        void setType(std::string  Type);
        std::string getType();
        void makeSound();
};
#endif