/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:19 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:20:20 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	IMATERIASOURCE_HPP
# define	IMATERIASOURCE_HPP

#pragma once 

#include	<string>
#include	<iostream>
#include	"AMateria.hpp"

class IMateriaSource
{
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif