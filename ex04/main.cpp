/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:45:39 by misaev            #+#    #+#             */
/*   Updated: 2022/03/11 15:01:19 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main()
{

    
        std::string filname;
        std::string s1;
        std::string s2;
        std::fstream fs;
    
        std::cout << CYN << "Enter source file name: " << NC;
        std::getline(std::cin, filname);
        if (filname.empty() == true)
        {
            std::cout << RED << "the filname is empty !" << std::endl;
            return 0;
        }
        fs.open (filname);
        if (fs.is_open() == false)
        {
            std::cout << RED << "The file does not exist or failed to open it !\n";
            return 0;
        }
        fs.close();
        std::cout << CYN << "Enter the word that you want to replace: " << NC;
        std::getline(std::cin, s1);
        if (s1.empty() == true)
        {
            std::cout << RED << "The string is empty\n";
            return 0;
        }
        std::cout << CYN << "By what word you want to replace it ? " << NC;
        std::getline(std::cin, s2);    
        if (s2.empty() == true)
        {
            std::cout << RED << "The string is empty\n";
            return 0;
        }
        Sed toto(filname, s1, s2);
        toto.openFileAndCopy();
        toto.replaceS1WithS2();
        toto.printS1();
        toto.copyNewCharToFile();
        return 1;
    
}

