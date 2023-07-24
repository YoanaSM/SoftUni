
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double a, b, c;
cin >> a >> b >> c;

double discriminant = b*b - 4 * a * c;
if (discriminant < 0)
{
cout << "no roots" << endl;
}
else
{
double x1 =( - b + sqrt(discriminant))/(2*a);
cout << x1;
if (discriminant != 0) {

    double x2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << " " << x2;

}
}

return 0;

}
