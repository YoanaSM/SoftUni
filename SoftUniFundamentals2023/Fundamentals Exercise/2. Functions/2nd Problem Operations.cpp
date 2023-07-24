#include<iostream>
#include <cmath>
using namespace std;

int division(int numb1, int numb2)
{
    if (numb2==0)
    {
        cout << "Can't divide by zero." << endl;
    }
    int division = numb1 / numb2;
    return division;
}
int multiplication(int numb1, int numb2)
{
    int multiplication = numb1 * numb2;
    return multiplication;
}
int subtraction(int numb1, int numb2)
{
    int subtraction = numb1 - numb2;
    return subtraction;
}
int sum(int numb1, int numb2)
{
    int sum = numb1 + numb2;
    return sum;
}




int main()
{
    int N1, N2;
    cin >> N1 >> N2;
    char operation;
    cin >> operation;
    if (operation == '*')
    {
        cout << multiplication(N1, N2);
    }
    else if (operation == '/')
    {
        cout << division(N1, N2);
    }
    else if (operation == '+')
    {
        cout << sum(N1, N2);
    }
    else /*if (operation == '-')*/
    {
        cout << subtraction(N1, N2);
    }
}