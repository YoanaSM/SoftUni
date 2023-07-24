#include<iostream>
#include <cmath>
using namespace std;

double distance(double width, double heigth)
{
    double distance = sqrt(abs(width * width) + abs(heigth * heigth));
    return distance;
}
int main()
{
    //1st problem Center point
    double X1, Y1;
    cin >> X1 >> Y1;
    double X2, Y2;
    cin >> X2 >> Y2;
    if (distance(X1,Y1) <= distance (X2,Y2))
    {
        cout << "(" << X1 << ", " << Y1 << ")" << endl;
    }
    else
        cout << "(" << X2 << ", " << Y2 << ")" << endl;
}