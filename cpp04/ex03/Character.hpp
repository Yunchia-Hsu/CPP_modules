/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:37 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:38:13 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Character 是具體類別，實現了 ICharacter 接口。
它擁有一個最多容納 4 個 Materia 的背包（inventory）。
當角色裝備 Materia 時，會依次放入背包中。如果背包滿了，則不會裝備更多。
unequip() 不會刪除 Materia，只是從背包中移除，還要防止記憶體洩漏。
在角色複製時，背包中的 Materia 需要進行深度拷貝。
*/
# ifndef	CHARACTER_HPP
# define	CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character: public ICharacter
{
    private:
        AMateria*inventory[4];
        std::string _name;
        int idx;
    public:
        Character();
        Character(std::string _name);
        Character(const Character& src);
        ~Character();
        Character& operator = (const Character& src);
        
        const std::string& getName()const;

        void equip(AMateria* materia);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif