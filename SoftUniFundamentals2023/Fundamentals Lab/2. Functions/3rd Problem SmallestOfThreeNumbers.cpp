#include<iostream>
using namespace std;

void minimumNumber(int number1,int number2,int number3)
{
    int min = number1;

    if (number2<min)
    {
        min = number2;
        if (number3 < number2)
        {
            min = number3;
        }
    }
    else
    {
        if (number3< min)
        {
            min = number3;
        }
    }
    cout << min << endl;
}

int main()
{
    int N1, N2, N3;
    cin >> N1 >> N2 >> N3 ;
    minimumNumber(N1, N2, N3);
}