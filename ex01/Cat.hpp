/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:24 by yberrim           #+#    #+#             */
/*   Updated: 2023/12/30 17:21:32 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"
#include "Animal.hpp"
class Cat : public Animal{
    private:
        Brain *brain;
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat &src); 
        Cat &operator=(const Cat &src);
        ~Cat();
        void setType(std::string newType);
        std::string getType();
        void makeSound();
};
#endif