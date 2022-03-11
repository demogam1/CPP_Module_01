/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:37:51 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 14:02:59 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << CYN << "Zombie named " << this->name << " is created" << NC << std::endl;   
    return;
}

Zombie::Zombie()
{
    std::cout << GRN "Constructeur Appeler\n" NC;
    return ;
}

Zombie::~Zombie()
{
    std::cout << RED "Destructeur Appeler\n" NC;
    return;
}

void Zombie::announce() const
{
    std::cout << CYN << this->name << ": BraiiiiiiinnnzzzZ..." << NC << std::endl;
    return;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}