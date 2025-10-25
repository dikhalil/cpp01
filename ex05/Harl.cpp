/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:53:50 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/25 21:38:03 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
    std::cout << "Debug" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Info" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "Error" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    void (Harl::*ptr[4]) (void) =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptr[i])();
            return ;
        }
    }
    std::cout << "Unknown" << std::endl;
}