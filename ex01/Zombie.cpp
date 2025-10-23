/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:01:54 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/23 16:19:16 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name(""){}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void) const
{
    return (name);
}

void Zombie::announce(void) const
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

