#include<iostream>
#include<cmath>
using namespace std;

void myPow(int numb, int power)
{
    int result = 1;
    for (size_t i = 1; i <= power; i++)
    {
        result = result * numb;
    }
    cout << result << endl;
}
int main()
{
    int numb;
    int power;
    cin >> numb >> power;
    myPow(numb, power);
}