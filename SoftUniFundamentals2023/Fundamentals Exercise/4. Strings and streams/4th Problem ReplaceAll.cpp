#include <iostream>
#include<sstream>
#include<cstring>

int main()
{
    std :: string str;
    getline(std :: cin , str);

    std :: string findStr;
    getline(std::cin,findStr);

    std :: string replaceStr;
    getline(std :: cin , replaceStr);


   int foundIndex = str.find(findStr);//search on which positions is the substring we want to replace
   while(foundIndex != std :: string::npos)
   {
       str.replace(foundIndex,findStr.length(),replaceStr);
       foundIndex = str.find(findStr,foundIndex+replaceStr.length());
   }

   std :: cout << str << std :: endl;








    return 0;
}
