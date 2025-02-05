#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <stack>
#include <string>


class RPN
{
   public:
    RPN();
    RPN(const RPN &from);
    RPN &operator=(const RPN &from);
    ~RPN();

    static void calculation(const std::string& arr);     // check static 
};

enum e_ops
{
    ADD = '+',
    SUB = '-',
    MUL = '*',
    DIV = '/'
};


#endif