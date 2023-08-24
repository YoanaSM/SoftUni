#include<iostream>
#include<sstream>
#include<cstring>

int main()
{
   std :: string line;
   getline(std :: cin , line);

   std :: istringstream readInput(line);


   std :: string word;

   int sum = 0;
   std :: ostringstream outputWords;

   while(readInput >> word)
   {
        std :: istringstream iStrConvert(word);
        int number;
        iStrConvert >> number;//if it is a number we save it in this stream

       if (iStrConvert){
          sum += number;
       }
       else
       {
          outputWords << word << " ";
       }

   }

   std :: cout << sum << std :: endl;
   std :: cout << outputWords.str() << std :: endl;

    return 0;
}