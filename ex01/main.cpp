/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:01:29 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/31 17:22:11 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = zombieHorde(7, "Foo");
    
    for (int i = 0; i < 7; i++)
        zombie[i].announce();
    delete[] (zombie);
    return (0);
}