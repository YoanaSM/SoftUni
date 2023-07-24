#include<iostream>
#include<cstring>
const int MAX_SIZE = 100;
bool checkBrackets(std :: string expression)
{
    int countLeftScope =0;
    int countRightScope = 0;

    for (char c : expression) {
        if (c == '(') {
            countLeftScope++;
        } else if (c == ')') {
            countRightScope++;
        }
    }
    return countRightScope==countLeftScope;
}

int main()
{
    std::string expression;

    int i = 0;

    std::getline(std::cin,expression);

    if (checkBrackets(expression))
    {
        std :: cout << "correct" << std :: endl;
    }
    else {
        std::cout << "incorrect" << std::endl;
    }
    //std :: cout << std :: endl;
    return 0;
}



