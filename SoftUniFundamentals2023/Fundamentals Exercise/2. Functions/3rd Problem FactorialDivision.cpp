#include<iostream>
#include<iomanip>
#include<cassert>
using namespace std;

int main ()
{
    double long num1, num2;
    cin >> num1 >> num2;
    assert(num2 != 0);
    double long result1 = 1;
    double long result2 = 1;
    if (num1 == 0)
    {
        cout << "0" << endl;
    }
    else {
        if (num2 == 0)
        {
            assert(num2 != 0);
        }
        for (size_t i = num1; i > 0; i--)
        {
            result1 *= i;
        }
        for (size_t i = num2; i > 0; i--)
        {
            result2 *= i;
        }
        double long resultTotal = static_cast<double long>(result1) / result2;
        cout << fixed << setprecision(2) << resultTotal;
    }
}
