#include<iostream>
#include<sstream>

int main()
{
    std :: string str;
    getline(std ::cin,str);


    std :: istringstream inputStr(str);

    std :: string words;
    std :: ostringstream outputStr;


    int maxNum = -1;
    while(inputStr >> words)
    {
        int number = 0;
         bool validNum = true;
        for (char c : words) {

            if (isdigit(c)) {
                number = number * 10 + (c - '0');
            }
            if (c == ' ')
            {
                validNum = false;
                break;
            }
        }
        if (number >= 0 && validNum)
        {
            if (number>maxNum)
            {
                maxNum = number;
            }
        }
    }

    if (maxNum!= -1)
    {
        std :: cout << maxNum << std :: endl;
    }
   else
    {
    std :: cout << "There are no numbers" << std :: endl;
    }

    return 0;
}