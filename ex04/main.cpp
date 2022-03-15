/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:45:39 by misaev            #+#    #+#             */
/*   Updated: 2022/03/14 10:15:35 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **arg)
{

    if (ac != 4)
    {
         std::cout << RED << "The program take 3 parameters ! ---> ./Sed [Filename] [Word to Replace] [Word to input]" << std::endl;
        return 0;
    }
    else
    {        
        std::string filname;
        std::string s1;
        std::string s2;
        std::fstream fs;
        filname.assign(arg[1]);
        s1.assign(arg[2]);
        s2.assign(arg[3]);
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
        if (s1.empty() == true)
        {
            std::cout << RED << "The second argument is empty\n";
            return 0;
        }
        if (s2.empty() == true)
        {
            std::cout << RED << "The last argument is empty\n";
            return 0;
        }
        Sed toto(filname, s1, s2);
        toto.openFileAndCopy();
        toto.replaceS1WithS2();
        toto.printS1();
        toto.copyNewCharToFile();
        return 1;
    }
    
}

