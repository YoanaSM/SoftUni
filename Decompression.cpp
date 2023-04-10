//
// Created by YoanaM on 4/10/2023.
//
#include<iostream>
//#include<vector>
#include<sstream>
#include<string>

using namespace std;

string decompress(const string & input)
{
    ostringstream output;
    int number = 0;

    for ( char c : input)
    {
        if (c >= '0'&& c <= '9')
        {
            number *= 10;
            number += (c - '0');
            continue;
        }

        if (number)
        {
            string strTemp(number, c);
            output << strTemp;
            number = 0;
        }
        else
        {
            output << c;
        }
    }
 // we will store the number of times a letter should be repeated

    return output.str();
}
int main()
{
    string input;

    getline(cin,input);


    cout <<  decompress(input) << endl;
    return 0;
}