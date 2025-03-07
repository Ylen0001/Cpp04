/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:06:13 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/07 15:09:01 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/colors.hpp"
#include <iostream>	

int main(void)
{
	Animal* animals[10];
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
		{
			animals[i] = new Dog;
			std::cout << C_PASTEL_BLUE << animals[i]->get_Type() << C_RESET << std::endl;
			animals[i]->makeSound();
		}
		if(i >= 5)
		{
			animals[i] = new Cat;
			std::cout << C_PASTEL_PURPLE << animals[i]->get_Type() << C_RESET << std::endl;
			animals[i]->makeSound();
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	return (0);
}
	// Animal* dog = new Dog;
	// Animal* cat = new Cat;

	// std::cout << cat->get_Type() << std::endl;
	// std::cout << dog->get_Type() << std::endl;
	
	// delete cat;
	// delete dog;