
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<list>

using namespace std;


int main()
{

 string input;

 cin >> input;

    string strUnusedLetters;
    strUnusedLetters = "abcdefghijklmnopqrstuvwxyz";

 for(size_t idx = 0; idx < input.size(); idx++)
 {
     size_t location = strUnusedLetters.find(input[idx]);

     if(location != string :: npos)
         strUnusedLetters.erase(location,1);

 }

    cout << strUnusedLetters << endl;
 return 0;
}