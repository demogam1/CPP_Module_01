/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:20:53 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 12:01:04 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    void announce (void) const;
    Zombie *newZombie (std::string name);
    void randomChump(std::string name);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);