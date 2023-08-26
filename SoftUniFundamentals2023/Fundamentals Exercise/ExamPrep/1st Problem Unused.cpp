#include<iostream>
#include<sstream>
#include<cstring>

int main()
{
    std :: string input;
    getline(std :: cin ,input);

   std ::  string letters = "abcdefjhigklmnopqrstvwxyz";

    for (size_t i = 0; i < input.size(); ++i)
    {
        size_t location = letters.find(input[i]);
        if (location != std :: string :: npos)
        {
            letters.erase(location,1);
        }
    }

    std :: cout << letters << std :: endl;

    return 0;
}