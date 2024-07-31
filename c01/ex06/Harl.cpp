/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:41:28 by snegi             #+#    #+#             */
/*   Updated: 2024/07/25 14:41:30 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

int Harl::getindex(std::string level)
{
    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if(levels[i] == level)
            return i;
    }
    return -1;
}

void Harl::complain(std::string level)
{
    int index = getindex(level);
    switch(index)
    {
        case 0:
            debug();
            // Fall through
        case 1:
            info();
            // Fall through
        case 2:
            warning();
            // Fall through
        case 3:
            error();
            break;
        default:
        std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
    }
}
