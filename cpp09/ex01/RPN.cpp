#include "RPN.hpp"
 
 
RPN::RPN(){}
RPN::RPN(const RPN &from)
{
    *this = from;
}
RPN& RPN::operator=(const RPN &from)
{
    (void) from;
    return *this;
}
RPN::~RPN(){}

void RPN::calculation(const std::string& arr)
{
    // for(int j = 0; j < 12; j++)
    //     std::cout << "arr: "<< arr[j]<< std::endl;
    std::stack<int> stack;
 
    for (int i = 0; arr[i]; i++)//"1 2 * 2 / 2 * 2 4 - +"
    {
        if (isdigit(arr[i]))
        {
            stack.push(arr[i] - '0');// - '0' convert to int
        }
        else if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
        {
            int n1 = stack.top();
            stack.pop();
            int n2 = stack.top();
            stack.pop();
            if (arr[i] == ADD)
                stack.push(n2 + n1);
            else if (arr[i] == SUB)
                stack.push(n2 - n1);
            else if (arr[i] == MUL)
                stack.push(n2 * n1);
            else if (arr[i] == DIV)
                stack.push(n2 / n1);
        }
    }
    std::cout<< "result : "<< stack.top() << std::endl;
}


 