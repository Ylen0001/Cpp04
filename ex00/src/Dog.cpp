/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:19:25 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/05 16:24:38 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called!" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << this->get_Type() << " constructor called!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Dog& Dog)
{
	out << Dog.get_Type() << std::endl;
	return (out);
}

std::string Dog::get_Type() const
{
	return(this->type);
}

void Dog::set_Type(const std::string type)
{
	this->type = type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}