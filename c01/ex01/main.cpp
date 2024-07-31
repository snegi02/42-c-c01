/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:35:53 by snegi             #+#    #+#             */
/*   Updated: 2024/07/25 14:35:56 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "Horde";
    Zombie* horde = zombieHorde(N, name);

    if(horde != NULL)
    {
        for(int i = 0; i < N; ++i)
        {
            horde[i].announce();
        }
    }
    delete[] horde;
    return 0;
}
