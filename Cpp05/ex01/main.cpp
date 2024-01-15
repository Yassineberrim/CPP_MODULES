/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:46:32 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/15 16:16:35 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("b1", 150);
        std::cout << b1;
        b1.incrementGrade();
        std::cout << b1;
        b1.decrementGrade();
        std::cout << b1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b("b1", 500);
        Bureaucrat c("b2", 522);
        Form f1("f1", 8, 400);
        std::cout << f1;
        f1.beSigned(b);
        std::cout << f1;
        f1.beSigned(c);
        std::cout << f1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}