#include<iostream>
#include<sstream>
using namespace std;

bool compareArrays(istream & arr1,istream & arr2)
{
  while(arr1&&arr2)
  {
      int arr1num, arr2num;
      arr1>> arr1num;
      arr2 >> arr2num;
      if (arr1num!=arr2num)
          return false;

  }
    return (bool) arr1 == (bool) arr2;
}

int main()
{
 string arr1string,arr2string;

 getline(cin,arr1string);
 getline(cin,arr2string);

 istringstream arr1(arr1string),arr2(arr2string);

    if (compareArrays(arr1,arr2))
        cout << "equal";
   else
       cout <<"not equal";

   cout << endl;
   return 0;
}
