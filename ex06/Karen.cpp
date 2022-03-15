/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:22:02 by misaev            #+#    #+#             */
/*   Updated: 2022/03/15 15:32:32 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    std::cout << GRN << "Constructor called\n" << NC;    
    return;
}

void Karen::complain(std::string level)
{
    std::string lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int i = 0;
    while (i < 4)
    {
        if (lvl[i] == level)
            break;
        else
            i++;
    }
    
    switch (i)
    {
        case 0:
            this->debug();
            this->info();
            this->warning();
            this->error();
            break;
        case 1:
            this->info();
            this->warning();
            this->error();
            break;
        case 2:
            this->warning();
            this->error();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << CYN << "[ Probably complaining about insignificant problems ]\n" << NC;
    }
}

void Karen::debug()
{
    std::cout << CYN << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !\n";
    return;
}

void Karen::info()
{
    std::cout << CYN << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
    return ;
}

void Karen::warning()
{
    std::cout << CYN << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
    return;   
}

void Karen::error()
{
    std::cout << CYN << "[ ERROR ]\n";
    std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
    return;
}

Karen::~Karen()
{
    std::cout << RED << "Destructor called\n" << NC;
    return;
}