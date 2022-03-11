/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:14:58 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 14:31:54 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *toto = zombieHorde(10, "Zombie ");
    for(int i = 0; i < 10; i++)
    {
        toto[i].announce();
    }
    delete [] toto;
    return 1;
}