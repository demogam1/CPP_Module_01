/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:42:11 by misaev            #+#    #+#             */
/*   Updated: 2022/03/10 11:23:57 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    std::cout << "Constructor of HumanB is called" << std::endl;
    return;
}

HumanB::HumanB(std::string name, Weapon *weapon)
{
    this->name = name;
    this->weapon = *weapon;
    std::cout << "Constructor of HumanA is called\n";
    return;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
    return;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    std::cout << "Constructor of HumanA is called\n";
    return;
}

void HumanB::attack()
{
    std::cout << RED << this->name << " attacks with their " << this->weapon.getType() << NC << std::endl;
}


HumanB::~HumanB()
{
    std::cout << "Destructor of HumanB is called" << std::endl;
    return;
}
