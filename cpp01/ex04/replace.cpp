/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:32:40 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/25 15:53:33 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2) : filename(filename), s1(s1), s2(s2)
{}

FileReplacer::~FileReplacer()
{}

std::string FileReplacer::readFile()
{
    std::ifstream infile(filename);
    if (!infile)
    {
        std::cout << "the file cannot be read or the file is empty." << std::endl; 
    }
    std::stringstream buffer;
    buffer << infile.rdbuf();
    std::string content = buffer.str();
    return (content);
}
int FileReplacer::writeFile(const std::string &content)
{
    std::ofstream outfile(filename + ".replace");
    if (!outfile)//why not .empty
    {
        std::cout << " Unalbe to create a file." << std::endl;
        return 1;
    }
    outfile << content;
    return 0;
}
int FileReplacer::replace()
{
    size_t current_pos = 0;
    size_t find_pos;
    std::string content = readFile();

    if (content.empty())
    {
        std::cout << "the file content is empty!" << std::endl;
        return 1;
    }
    std::string new_content;
    while(1)
    {
        if (s1 == "")
			break;
		find_pos = content.find(s1, current_pos);
        if (find_pos == std::string::npos)
            break;
        new_content.append(content, current_pos, find_pos - current_pos );
        new_content = new_content + s2;
        current_pos = find_pos + s1.length();
       // std::cout << "new content: \n" << new_content << std::endl;
    }
    new_content.append(content, current_pos, std::string::npos);//?
    if (writeFile(new_content))
        return 1;
    return 0;
}