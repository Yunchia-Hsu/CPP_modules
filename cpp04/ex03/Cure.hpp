/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:35 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:27:22 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure (const Cure& src);
		Cure & operator = (const Cure& src);
		AMateria* clone()const;
		void use(ICharacter& target);
};
