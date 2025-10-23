/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:50:02 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/23 17:53:34 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)  {}
        
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanB::attack(void) const
{
    std::cout << name << " attacks with their "
              << weapon->getType() << std::endl;
}
