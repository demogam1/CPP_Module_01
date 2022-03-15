/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:24:48 by misaev            #+#    #+#             */
/*   Updated: 2022/03/15 10:11:05 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>

Karen::Karen()
{
    std::cout << GRN << "Constructor called\n" << NC;
    return;
}

void    Karen::complain(std::string level)
{
    void(Karen::*message[4])(void);
    std::string lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    message[0] = &Karen::debug;
    message[1] = &Karen::info;
    message[2] = &Karen::warning;
    message[3] = &Karen::error;

    for (int i = 0; i < 4; i++)
    {
        if (level == lvl[i])
        {
            (this->*message[i])();
            return;
        }
    }
    std::cout << RED << "Error: Bad Message." << NC << std::endl;
}

void Karen::debug(void)
{
    std::cout << CYN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << NC << std::endl;
    return;
}

void Karen::info(void)
{
    std::cout << CYN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << NC << std::endl;
    return;
}

void Karen::warning(void)
{
    std::cout << CYN << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << NC << std::endl;
    return;
}

void Karen::error(void)
{
    std::cout << CYN << "This is unacceptable ! I want to speak to the manager now." << NC << std::endl;
    return;
}

Karen::~Karen()
{
    std::cout << RED << "Destructor Called\n" << NC;
    return;
}