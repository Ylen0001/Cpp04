/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:16:53 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/05 17:25:04 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "colors.hpp"
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	public :

	Cat();
	~Cat();
	Cat(std::string type);
	Cat(const Cat& other); 
	std::string get_Type() const;
	void set_Type(const std::string type);
	Cat& operator=(const Cat& other);
	void makeSound() const;
};

std::ostream& operator<<(std::ostream& out, const Cat& Cat);

#endif