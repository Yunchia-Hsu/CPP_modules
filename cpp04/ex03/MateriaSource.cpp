/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:16 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:20:17 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 這是一個專門用來學習和創建 Materia 的類，它實現了 IMateriaSource 接口。
// learnMateria(AMateria*)：將 Materia 存儲在記憶體中，最多只能記住 4 個。
// createMateria(std::string const & type)：根據類型創建一個新 Materia。
// 如果未找到對應類型，則返回 0。

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): idx(0)
{
    std::cout << "Default MateriaSource has been created." << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->materia[i] = NULL;
    }
}
MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
    std::cout << "MateriaSource constructor called." << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (materiaSource.materia[i] != NULL)
            this->materia[i] = materiaSource.materia[i]->clone;
    }
}
MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destructor called." << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
            delete this->materia[i];
    }
}
MateriaSource&	MateriaSource::operator=(const MateriaSource& materiaSource)
{
    std::cout << "MateriaSource copy assignment operator called." << std::endl;
    if (this == &materiaSource)
        return *this;
    for (int i = 0; i < 4 ; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
        this->materia[i] = NULL;
        if (materiaSource.materia[i])
            this->materia[i]= materiaSource.materia[i]->clone();
    }
   this->idx = materiaSource.idx;
    return *this;
}
void			MateriaSource::learnMateria(AMateria* materia)///?????
{
    if (this->idx  == -1)
    {
        if (materia)
            delete materia;
        return;
    }

    for (int i = 0; i < 4 ; i++)
        if (this->materia[i] == materia)
            return;
    this->materia[this->idx] == materia;
    this->idx = this->idx + 1  >= 4 ? -1 : this->idx + 1;
    // if idx + 1 >= 4 then return -1 otherwise return idx + 1;
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
        {

            if (this->materia[i]->getType().compare(type) == 0)
                return (this->materia[i]->clone());
        }
    }
    return 0;
}