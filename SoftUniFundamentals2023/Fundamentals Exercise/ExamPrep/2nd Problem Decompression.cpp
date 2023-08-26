#include<iostream>
#include<cstring>
#include <sstream>

std :: string decompress(const std :: string & input)
{
    std::ostringstream  output;
    int number = 0;
    for(char c : input)
    {
        if (isdigit(c))
        {
             number = number*10 + c - '0';
        }
        else
        {
            if(number>0)
            {
                for (int i = 1; i <= number; ++i) {
                    output << c;
                }
                number = 0;
            }
            else
            {
                output<<c;
            }
        }
    }
 
    return output.str();
}



int main()
{
    std :: string str;
    getline(std :: cin,str);

     std :: cout << decompress(str) << std :: endl;


    return 0;
}