/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:50:03 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/23 16:09:54 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
    }
    return (zombie);
}