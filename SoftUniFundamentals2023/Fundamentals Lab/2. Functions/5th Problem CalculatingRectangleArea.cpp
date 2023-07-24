#include<iostream>
#include<cmath>
using namespace std;

void areaRectangle(double width, double heigth)
{
    double area = width * heigth;
    cout << area << endl;
}
int main()
{
    double width, heigth;
    cin >> width >> heigth;
    areaRectangle(width, heigth);
}