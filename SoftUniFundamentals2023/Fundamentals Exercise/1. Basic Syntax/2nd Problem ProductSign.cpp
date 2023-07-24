#include<iostream>
using namespace std;
bool isPositive(double d)
{
    return d >= 0;
}
int main()
int main()
{
double d1, d2, d3;
cin >> d1 >> d2 >> d3;
bool outputSign = isPositive(d1);
outputSign = (outputSign = isPositive(d2));
outputSign = (outputSign = isPositive(d3));
if (outputSign)
{
cout << "+" << endl;
}
else {
cout << "-" << endl;
}
return 0;

}