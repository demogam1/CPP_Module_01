/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:01:50 by misaev            #+#    #+#             */
/*   Updated: 2022/03/09 18:00:49 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string string);
        const std::string &getType() const;
        void setType(std::string newValue);
        ~Weapon();
    private:
        std::string type;
};