/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:29:16 by misaev            #+#    #+#             */
/*   Updated: 2022/03/09 18:02:12 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon()
{
    std::cout << "Weapon Constructor is called" << std::endl;
    return;   
}

Weapon::Weapon(std::string string)
{
    setType(string);
    std::cout << "Weapon Constructor is called" << std::endl;
    return;
}

const std::string &Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string newValue)
{
    this->type = newValue;
    return; 
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor called" << std::endl;
    return;
}

