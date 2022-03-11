/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:33:09 by misaev            #+#    #+#             */
/*   Updated: 2022/03/11 14:01:42 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

class Sed
{    
    public:
        Sed();
        Sed(std::string filename, std::string s1, std::string s2);
        void openFileAndCopy();
        void replaceS1WithS2();
        void copyNewCharToFile();
        void printS1();
        ~Sed();
    private:
        std::string str1;
        std::string s1;
        std::string s2;
        std::string filename;
};