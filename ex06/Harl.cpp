/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:53:50 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/25 22:21:25 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
    std::cout << "[Debug]\n" 
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
              << std::endl;
}

void Harl::info(void)
{
    std::cout << "[Info]\n"
              << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[Warning]\n" 
              << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "[Error]\n" 
              << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

void Harl::complain(std::string level)
{
    int levelNbr;

    levelNbr = -1;
    std::string levels[4] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            levelNbr = i;
            break;
        }
    }
    void (Harl::*ptr[4]) (void) =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    switch (levelNbr)
    {
        case 0:
            (this->*ptr[0])();
            // fall through
        case 1:
            (this->*ptr[1])();
            // fall through
        case 2:
            (this->*ptr[2])();
            // fall through
        case 3:
            (this->*ptr[3])();
            break;
        default:
            std::cout << "Unknown" << std::endl;
    }
}