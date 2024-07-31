/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:37:15 by snegi             #+#    #+#             */
/*   Updated: 2024/07/25 14:37:17 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Memory add. of string: " << &brain << std::endl;
    std::cout << "Memory add. of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory add. of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of string: " << brain << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;
    return 0;
}
