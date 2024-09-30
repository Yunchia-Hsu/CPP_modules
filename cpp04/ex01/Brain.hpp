/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:55:02 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 17:53:28 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP 

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100]; 

	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator = (const Brain& other);
		~Brain();

		const std::string getIdea(int i)const;
		const std::string *getIdeaAddress(int i) const;

		void setIdea(int i, std::string idea);
};



#endif