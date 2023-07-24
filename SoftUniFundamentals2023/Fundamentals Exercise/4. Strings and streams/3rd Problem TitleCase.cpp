#include<iostream>
#include<cstring>
#include<sstream>

std :: string capitalize(const std :: string & input)//reference bc we won't uncopy the string we receive and we wont change the string
{

    std ::  ostringstream oStr;


    bool capitalize = true;
    for (size_t idx = 0; idx < input.length(); idx++)
    {
        char c = input[idx];
        if (c >='a' && c <='z'|| c >= 'A' && c<='Z')// if it is a letter
        {
            if(capitalize)
            {
                if (c >= 'a' && c <='z')

                    c -= 32;
                capitalize = false; // turn the small letter into capital

            }
        }
        else
            capitalize = true;
        oStr << c;

    }


    return oStr.str();
}
int main()
{
    std :: string input;
    getline(std::cin,input);
    std::cout << capitalize(input )<< std::endl;
    return 0;
}
