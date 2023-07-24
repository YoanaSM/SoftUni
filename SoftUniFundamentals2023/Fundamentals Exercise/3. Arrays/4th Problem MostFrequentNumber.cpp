#include<iostream>
#include<climits>
#include<cassert>

const int MAX_SIZE = 1500;

void enterArray(int array[], int & size)
{
    std :: cin >> size;
    for (int i = 0; i < size ; ++i)
    {
        assert(size<MAX_SIZE);
        std :: cin >> array[i];

    }

}
int main() {
    int count[10] = {0};//0 ..9

    int arrInput;
    std::cin >> arrInput;

    for (int i = 0; i < arrInput; i++)
    {
        int curNumber;
        std::cin >> curNumber;

        assert(curNumber >= 0 && curNumber <= 9);
        count[curNumber]++;

    }
    // find the max value in the list of counts
    size_t maxValue = count[0];

    for (size_t i = 1; i < 10 ; i++)
        if (count[i] > maxValue)
            maxValue = count[i];

    // print out all the digits that are met maxValue times
    for(size_t i = 0 ;i < 10 ; i++)
        if(count[i] == maxValue)
            std :: cout << i << " ";

    std :: cout << std :: endl;

    return 0;
}