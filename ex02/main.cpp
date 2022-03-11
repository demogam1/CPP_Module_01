/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:40:22 by misaev            #+#    #+#             */
/*   Updated: 2022/03/09 13:34:54 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define GRNB "\e[41m"

int main()
{
    std::string string = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &string;
    
    std::string &stringREF = string;
    
    
    std::cout << GRN << "L’adresse de la string en mémoire " << &string << NC << std::endl;

    std::cout << GRN << "L’adresse stockée dans stringPTR " << &stringPTR << NC << std::endl;

    std::cout << GRN << "L’adresse stockée dans stringREF " << &stringREF << NC << std::endl;

    std::cout << CYN << "La valeur de la string " << string << NC << std::endl;

    std::cout << CYN << "La valeur pointée par stringPTR " << *stringPTR << NC << std::endl;

    std::cout << CYN << "La valeur pointée par stringREF " << stringREF << NC << std::endl;
     
    return 1;
}