/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:40 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:20:41 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Character 是具體類別，實現了 ICharacter 接口。
它擁有一個最多容納 4 個 Materia 的背包（inventory）。
當角色裝備 Materia 時，會依次放入背包中。如果背包滿了，則不會裝備更多。
unequip() 不會刪除 Materia，只是從背包中移除，還要防止記憶體洩漏。
在角色複製時，背包中的 Materia 需要進行深度拷貝。
*/

#include "Character.hpp"

Character::Character():_name("no name"), idx(0)
{
    std::cout << "Default Character has been created." << std::endl;
}

Character::Character(std::string _name):_name(_name), idx(0)
{
    std::cout << "Default Character has been created with name." << std::endl;
    for (int i = 0; i < 4 ; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character& src)
{
    std::cout << "Character copy constructor called." << std::endl;
    this->_name = src._name;
    this->idx = src.idx;
    for (int i = 0; i < 4 ; i++)
    {
        this->inventory[i] = NULL;
        if (src.inventory[i] != NULL)
            this->inventory[i] = src.inventory[i]->clone();
    } 

}
Character::~Character()
{
    std::cout << "Character destructor called at address" << this << std::endl;
    for (int i = 0; i < 4 ; i++)
    {
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
    }
}

Character& Character::operator = (const Character& src)//?
{
    std::cout << "Character copy assignment operator called." << std::endl;
    if (this == &src)
        return *this;
    for (int i = 0; i < 4 ; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        this->inventory[i] = NULL;
        if (src.inventory[i])
            this->inventory[i]= src.inventory[i]->clone();
    }
   this->idx = src.idx;
    return *this;
}

const std::string& Character::getName()const
{
    return this->_name;
}

void Character::equip(AMateria* materia)
{
    int i = 0;
    if (!materia)
    {
        std::cout << this->_name << 
        " nothing can be equiped." << std::endl;
		return ;
    }
    if ( i > 3)
	{
		std::cout << this->_name << " can't equip more than 4 Materia" << std::endl;
		return ;
	}
    if (this->inventory[i] != NULL && i < 4)
        i = i + 1;
    this->inventory[i] = materia;
    std::cout << "Materia " << materia->getType() << "named: " << 
    this->_name << "was equipped in position " << idx <<std::endl;
    
 

}
void Character::unequip(int idx)
//doesnt delete the material, so if materia are more than 4 , need to reate another pointer to delete the material to prevent memory leak
{
    if (idx < 0 || idx > 3)
        std::cout << "Unequipped nothing." << std::endl;
    else if (!this->inventory[idx])
        std::cout << "nothing was equipped in the idx slot." << std::endl;
    else if (this->inventory[idx] && idx == 3)
    {
        //AMateria *p = this->inventory[idx];
        std::cout << this->_name << " unequipped " << this->inventory[idx]->getType() << " at slot "<< idx << std::endl;
        this->inventory[idx] = 0;
    }
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !this->inventory[idx])
    {
        return;
    }
    this->inventory[idx]->use(target);//?
}
