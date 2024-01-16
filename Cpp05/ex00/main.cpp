/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:46:32 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/16 17:34:11 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat b1("b1", 5);
        std::cout << b1;
        b1.incrementGrade();
        std::cout << b1;
        b1.decrementGrade();
        std::cout << b1;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}