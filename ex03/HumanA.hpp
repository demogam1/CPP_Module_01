/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:03:56 by misaev            #+#    #+#             */
/*   Updated: 2022/03/10 11:20:12 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

class HumanA
{
    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        HumanA(std::string name);
        void setWeapon(Weapon weapon);
        void attack();
        ~HumanA();
    private:
        Weapon weapon;
        std::string name;
};