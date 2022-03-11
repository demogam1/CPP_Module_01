/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:36:40 by misaev            #+#    #+#             */
/*   Updated: 2022/03/10 11:20:08 by misaev           ###   ########.fr       */
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


class HumanB
{
    public:
        HumanB();
        HumanB(std::string name, Weapon *weapon);
        HumanB(std::string name);
        void setWeapon(Weapon weapon);
        void attack();
        ~HumanB();
    private:
        Weapon weapon;
        std::string name;
};