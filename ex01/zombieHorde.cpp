/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:48:11 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 14:31:14 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie *toto = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        toto[i].set_name(name + std::to_string(i));
    }
    return toto;
}