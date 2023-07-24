#include <iostream>
#include<cmath>
#include<climits>
#include<cassert>


const int MAX_SIZE = 150;
int main()
{
    int N1;
    std::cin >> N1;
    assert(N1>=0);
    if(N1 == 0)
    {
        return 1;}



    int arr1[MAX_SIZE];
    int subtraction = 0;
    int  minSubtract = INT_MAX;
    for (size_t i = 0; i < N1; i++)
    {
        std::cin >> arr1[i];

    }
    for (size_t i = 0; i < N1; i++)
    {

        for (size_t j = i + 1; j < N1; j++)
        {
            subtraction = abs(arr1[i] - arr1[j]);
            if (subtraction < minSubtract)
            {
                minSubtract = subtraction;
            }
        }

    }

    std::cout << minSubtract << std::endl;
    return 0;
}
