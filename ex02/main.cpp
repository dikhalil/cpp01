/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:23:31 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/23 16:31:48 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << "\n"
              << stringPTR << "\n"
              << &stringREF << "\n"
              << str << "\n"
              << *stringPTR << "\n"
              << stringREF << std::endl;
    return (0);
}