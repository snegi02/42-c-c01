/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:39:24 by snegi             #+#    #+#             */
/*   Updated: 2024/07/25 14:39:26 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

void replace(const std::string file, const std::string s1, const std::string s2)
{
    size_t pos = 0, foundpos;
    std::string res;
    std::ifstream is(file.c_str());
    if (!is.is_open())
    {
        std::cerr << "File is not opened." << std::endl;
        return ;
    }
    std::stringstream buffer;
    buffer << is.rdbuf();
    std::string content = buffer.str();
    is.close();
    while((foundpos = content.find(s1, pos)) != std::string::npos)
    {
        res += content.substr(pos, foundpos - pos);
        res += s2;
        pos = foundpos + s1.length();
    }
    res += content.substr(pos);
    std::string newfile = file + ".replace";
    std::ofstream os(newfile.c_str());
    if (!os.is_open())
    {
        std::cerr << "Failed to open the output file." << std::endl;
        return;
    }
    os << res;
    os.close();
    std::cout << "Replaced content saved to " << newfile << std::endl;
}

int main(int ac, char **ar)
{
    if (ac != 4)
    {
        std::cerr << "correct format filename,string1 and string2" << std::endl;
        return (1);
    }
    std::string filename = ar[1];
    std::string s1 = ar[2];
    std::string s2 = ar[3];
    replace(filename, s1, s2);
    return (0);
}
