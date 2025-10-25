/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:53:19 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/25 21:53:49 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    std::string level;

    if (argc == 2)
    {
        level = argv[1];
        harl.complain(level);
        return (0);
    }
    std::cout << "Level is missing" << std::endl;
    return (1);
}