/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:37:51 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 11:15:02 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie named " << this->name << " is created" << std::endl;   
    return;
}

Zombie::Zombie()
{
    std::cout << "constructeur apppeler\n";
    return ;
}

Zombie::~Zombie()
{
    std::cout << "class destroyed\n";
    return;
}

void Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}