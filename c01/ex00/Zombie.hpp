/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:51:40 by snegi             #+#    #+#             */
/*   Updated: 2024/07/25 12:51:42 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
