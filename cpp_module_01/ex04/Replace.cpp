/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:39:20 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 19:48:41 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.h"

Replace::Replace(const std::string &file, const std::string &s1, const std::string &s2) :
        fileName(file), s1(s1), s2(s2){}

Replace::~Replace(){}

void Replace::replace()
{
    std::ifstream   infile (fileName);
    std::string     line;

    if (infile.is_open())
    {
        std::ofstream   outfile (fileName.append(".replace"));
        size_t index = -1;
        if (outfile.is_open())
        {
            while (infile.good() && outfile.good()) 
            {
                getline(infile, line);
                index = line.find(s1);
                while (index != std::string::npos)
                {
                    line = line.substr(0, index) + s2 + line.substr(index + s1.length(), line.length());
                    index = line.find(s1, index + 1);
                }
                outfile << line << std::endl;
            }
            outfile.close();
        }
        else
            std::cerr << fileName.append(".replace") << ": " << strerror(errno) << std::endl;
        infile.close();
    }
    else
        std::cerr << fileName << ": " << strerror(errno) << std::endl;
}
