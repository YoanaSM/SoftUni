#include<iostream>
using namespace std;
int main()
{
    long int number;
    cin >> number;
    unsigned long sumeven = 0;
    unsigned long sumodd = 0;

    while(number)
    {
        int singles = number % 10;
        if (singles % 2 == 0)
        {
            sumeven += singles;
        }
        else
            sumodd += singles;


        number = number / 10;
    }
    cout << sumodd * sumeven << endl;
}
