/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:19:25 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/07 10:48:13 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->type = other.type;
}

std::ostream& operator<<(std::ostream& out, const Cat& Cat)
{
	out << Cat.get_Type() << std::endl;
	return (out);
}

std::string Cat::get_Type() const
{
	return(this->type);
}

void Cat::set_Type(const std::string type)
{
	this->type = type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignement called!" << std::endl;
	this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}