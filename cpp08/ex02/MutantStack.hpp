/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:46:08 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/12 15:49:55 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename container = std::deque<T>>  // define tamplate this way so we can use any container 
                                                            //as MutantStack<int, std::vector<int>> m; 
class MutantStack : public std::stack<T, container>
{
    //protected:
        //std::stack<T> c;   inherit from deque so it's alreeady there 
    public:
        
        MutantStack():std::stack<T, container>()
        {}
        ~MutantStack()
        {}
        MutantStack(const MutantStack & from):std::stack<int>(from)
        {
            *this = from;
        };
        MutantStack& operator=(const MutantStack & from)
        {
            if (this != &from)
            {
                std::stack<T, container>::operator= (from);
            }
            return *this;
        };

    typedef typename std::stack<T>::container_type container_type;
    typedef typename container_type::iterator iterator;
    typedef typename container_type::const_iterator const_iterator;

        iterator begin()
        {
            return this->c.begin();
        };
        iterator end()
        {
            return this->c.end();
        };
        const_iterator begin() const
        {
            return this->c.begin();
        };
        const_iterator end() const
        {
            return this->c.end();
        };

};

#endif