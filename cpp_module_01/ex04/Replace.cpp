/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:39:20 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/16 18:40:35 by eabdelha         ###   ########.fr       */
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
    size_t index;

    if (infile.is_open())
    {
        std::ofstream   outfile (fileName + ".replace");
        if (outfile.is_open())
        {
            line.assign((std::istreambuf_iterator<char>(infile)), (std::istreambuf_iterator<char>()));
            index = line.find(s1);
            while (index != std::string::npos && s1[0])
            {
                line.erase(index, s1.length());
                line.insert(index, s2);
                index = line.find(s1, index + 1);
            }
            outfile << line << std::flush;
            outfile.close();
        }
        else
            std::cerr << fileName + ".replace: " << strerror(errno) << std::endl;
        infile.close();
    }
    else
        std::cerr << fileName << ": " << strerror(errno) << std::endl;
}
