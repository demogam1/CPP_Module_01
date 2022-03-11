/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:20:53 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 14:08:20 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
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
    void set_name(std::string name);
    void announce (void) const;
    ~Zombie();
};

Zombie*    zombieHorde( int N, std::string name );