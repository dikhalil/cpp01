/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:01:29 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/23 16:17:42 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N;
    std::string name;
    Zombie *zombie;
    
    N = 7;
    name = "Foo";
    zombie = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }
    delete[] (zombie);
    return (0);
}