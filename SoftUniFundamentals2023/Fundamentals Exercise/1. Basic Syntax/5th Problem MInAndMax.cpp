#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int current;
    int min = INT_MAX;
    int max = INT_MIN;

    for (size_t i = 1; i <= N; i++)
    {
        cin >> current;
        if (current < min)
        {
            min = current;
        }
        if (current > max)
        {
            max = current;
        }
    }
    cout << min  << " " << max;
    return 0;

}
