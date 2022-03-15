/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:16:48 by misaev            #+#    #+#             */
/*   Updated: 2022/03/15 15:15:06 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **arg)
{
    if (ac != 2)
    {
        std::cout << RED << "Number of argument is incorrect\n";
        return 0;   
    }
    
    Karen toto;

    toto.complain(arg[1]);

    return 1;
}