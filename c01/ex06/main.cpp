/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:41:13 by snegi             #+#    #+#             */
/*   Updated: 2024/07/25 14:41:15 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **ar)
{
    if (ac != 2)
    {
        std::cerr << "enter only one argument!" << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain(ar[1]);
    return 0;
}
