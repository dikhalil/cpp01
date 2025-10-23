/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:01:42 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/23 16:03:57 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie(void);
        Zombie(void);
        void setName(std::string name);
        std::string getName(void) const;
        void announce(void) const;
};

Zombie *zombieHorde(int N, std::string name);

#endif