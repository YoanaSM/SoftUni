#include <iostream>
#include <sstream>

int main()
{
    std :: string str;
    getline(std :: cin,str);

    std::istringstream readString(str);

    std :: string longestNoise;
    std :: string noise;

    while(readString >> noise)
    {

        bool isDigit = true;

        for (char c : noise )
        {
            if (!isdigit(c))
            {
                isDigit = false;
                break;
            }
        }
        if (!isDigit && noise.length() > longestNoise.length())
        {
            longestNoise = noise;
        }
    }

    if (!longestNoise.empty())
    {
        std :: cout << longestNoise << std :: endl;
    }
    else
    {
        std :: cout << "There is no noise" << std :: endl;
    }

    return 0;
}