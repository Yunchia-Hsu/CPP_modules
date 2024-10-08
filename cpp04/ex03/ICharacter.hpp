/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:22 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:28:11 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ICharacter 是一個純虛擬類，定義角色的基本行為：
getName()：返回角色的名字。
equip(AMateria* m)：裝備 Materia。
unequip(int idx)：卸下指定槽位的 Materia。
use(int idx, ICharacter& target)：使用指定槽位的 Materia，並將 target 傳遞給 AMateria::use() 函數。

*/

# ifndef	ICHARACTER_HPP
# define	ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class AMateria;//?

class ICharacter
{
    public:
        virtual ~ICharacter(){}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* materia) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif