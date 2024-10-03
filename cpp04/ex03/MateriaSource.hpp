/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:13 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:38:42 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef	MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP

#include	<string>
#include	<iostream>
#include	"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private: 
        AMateria* materia[4];
        int idx;
    public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& materiaSource);
		~MateriaSource(void);
		MateriaSource&	operator=(const MateriaSource& materiaSource);
		void			learnMateria(AMateria* materia);
		AMateria*		createMateria(const std::string& type);
};

#endif