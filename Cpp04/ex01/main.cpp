/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:21:17 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/01 11:57:01 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main0()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

delete j;//should not create a leak
delete i;
return 0;
}
int main() {

    main0();
    system("leaks main");
    // deepVsShallow();
}


// void deepVsShallow()
// {
//     Brain b1;
//     Brain b2 = b1;
//     std::cout << "before------->b1 : \n";
//     for(int i = 0; i < 5; i++)
//         std::cout << b1.getIdea(i) << "\n";
//     std::cout << "before------->b2 : \n";
//     for(int i = 0; i < 5; i++)
//         std::cout << b2.getIdea(i) << "\n";
//     b1.setIdea("a");
//     std::cout << "after------->b1 : \n";
//     for(int i = 0; i < 5; i++)
//         std::cout << b1.getIdea(i) << "\n";
//     std::cout << "after------->b2 : \n";
//     for(int i = 0; i < 5; i++)
//         std::cout << b2.getIdea(i) << "\n";
// }
// int main()
// {
//     // const Animal* j = new Dog();
//     // const Animal* i = new Cat();

//     // Animal *Array[10];
//     // for(int x = 0; x < 5; x++)
//     //     Array[x] = new Dog;
    
//     // for(int x = 5; x < 10; x++)
//     //     Array[x] = new Cat;
//     // std::cout << "debug test\n";
    
//     // for(int x = 0; x < 10; x++)
//     //     Array[x]->makeSound();
        
//     // for(int x = 0; x < 10; x++)
//     //     delete Array[x];

//     Dog d1;
//     std::cout << "        before d1 type : " << d1.getType() << "\n";
//     Dog d2 = d1;
//     std::cout << "        before : d2 type : " << d2.getType() << "\n";
//     d2.setType("ddd");
//     std::cout << ">>>>after : d1 type : " << d1.getType() << "\n";
//     std::cout << ">>>>after : d2 type : " << d2.getType() << "\n";
//     return 0;

// }

