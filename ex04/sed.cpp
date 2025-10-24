/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:26:07 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/24 19:38:04 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static bool openFiles(const std::string &fileName, std::ifstream &inFile, std::ofstream &outFile)
{
    inFile.open(fileName.c_str());
    if (!inFile)
    {
        std::cerr << "Error: can't open input file: " << fileName << std::endl;
        return (false);
    }
    outFile.open((fileName + ".sed").c_str());
    if (!outFile)
    {
        std::cerr << "Error: can't create output file" << std::endl;
        return (false);
    }

    return (true);
}

static void replaceLine(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t pos;

    pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
}

void sed(const std::string &fileName, const std::string &s1, const std::string &s2)
{
    std::string line;
    std::ifstream inFile;
    std::ofstream outFile;

    if (!openFiles(fileName, inFile, outFile))
        return ;
    while (std::getline(inFile, line))
    {
        replaceLine(line, s1, s2);
        outFile << line << std::endl;
    }
}


