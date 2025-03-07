/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:19:25 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/07 10:53:08 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"

Dog::Dog(): Animal()
{
	this->set_Type("Dog");
	std::cout << "Dog default constructor called!" << std::endl;
	std::cout << this->Animal::get_Type() << std::endl;
	std::cout << this->get_Type() << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->type = other.type;
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
	std::cout << "Dog copy assignment called!" << std::endl;
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}