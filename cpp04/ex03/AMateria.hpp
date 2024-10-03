/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:43 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:26:00 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	AMATERIA_HPP
# define	AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
		
	public:
		AMateria();
		AMateria(AMateria& materia);
		AMateria(std::string const & type);//物質的類型
		AMateria& operator = (const AMateria& src);
		virtual ~AMateria();
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif