/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:04:00 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/24 19:42:22 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
    std::string fileName;
    std::string s1;
    std::string s2;

    if (argc == 4)
    {
        fileName = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        if (s1.empty())
        {
            std::cerr << "Error: the first string is empty" << std::endl;
            return (1);
        }
        sed(fileName, s1, s2);
    }
    else
    {
        std::cerr << "Error: try ./Sed filename s1 s2" << std::endl;
        return (1);
    }
    return (0);
}