#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ca = a;
    int cb = b;
    while (ca != 0 && cb != 0)
    {
        int division = ca / cb;
        int remainder = ca % cb;
        ca = cb;
        cb = remainder;

    }
    int gcd;
    if (ca == 0)
    {
        gcd = cb;
    }
    else if (cb == 0)
    {
        gcd = ca;
    }cout << gcd;
    return 0;

}
