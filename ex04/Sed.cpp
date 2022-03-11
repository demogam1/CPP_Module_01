/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:02:38 by misaev            #+#    #+#             */
/*   Updated: 2022/03/11 14:58:01 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed()
{
    std::cout << GRN << "Constructor Sed appeler" << NC << std::endl;
    return;
}

Sed::Sed(std::string filename, std::string s1, std::string s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

void Sed::openFileAndCopy()
{
    std::ifstream ifs(this->filename);
    this->str1.assign( (std::istreambuf_iterator<char>(ifs) ),
                    (std::istreambuf_iterator<char>()    ) );
    ifs.close();
}

void Sed::replaceS1WithS2()
{
    while(1)
    {        
        int i = this->str1.find(this->s1);
        if (i < 0)
            break;
        int j = 0;
        int b = 0;
        while (this->str1[i] == this->s1[j])
        {
            this->str1[i] = this->s2[b];
            i++;
            j++;
            b++;
        }
    }
}

void Sed::copyNewCharToFile()
{
    std::ofstream ofs(this->filename + ".replace");
    ofs << this->str1;
    ofs.close();
}

void Sed::printS1()
{
    std::cout << this->str1 << std::endl;
    return;
}

Sed::~Sed()
{
    std::cout << "Destructor Sed appeler" << std::endl;
    return;
}