#include<iostream>
#include<cmath>

int main()
{
    char c;
    int number= 0;


    while(std :: cin >> c)
    {
        if (c >='0' && c <='9')
        {
            number = number * 10;
            number = number + (c -'0');
            //31 = 3*10 + 1
            //321 = 3*100 + 2*!0 + 1
            //3
            // number = number*10 = 0*10
            // number = number + 3
            //2
            // number=number*10 = 30
            //number = number*10 = 30 + 2 = 32
            //1
            //number = number*10 +1 = 32
            // num = num*10 + 1 = 321
        }
        if (c == '.') {
            break;
        }

    }
    std :: cout << sqrt((double)number) << std :: endl;


}

