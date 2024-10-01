/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:05 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 17:11:51 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
    private:
        std::string _type;

    public:
        WrongCat();
        WrongCat (WrongCat& other);
        WrongCat& operator= (WrongCat& other);
        void makeSound() const override;
        ~WrongCat() override;
        
    
};

#endif