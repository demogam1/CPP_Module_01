/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:03:06 by misaev            #+#    #+#             */
/*   Updated: 2022/03/10 11:21:28 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << "Constructor of HumanA is called\n";
    return;
}

HumanA::HumanA(std::string name)
{
    this->name = name;
    std::cout << "Constructor of HumanA is called\n";
    return;
}

void HumanA::attack()
{
    std::cout << RED << this->name << " attacks with their " << this->weapon.getType() << NC << std::endl;
    return;
}

HumanA::~HumanA()
{
    std::cout << "Destructor of HumanA is called\n";
    return;
}

