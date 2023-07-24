#include <iostream>

const int MAX_SIZE = 500;
void enterArray(int array[], int & arrSize)
{
    std :: cin >> arrSize;
    if (arrSize > MAX_SIZE)
    {
        exit(1);
    }
    for (size_t i = 0; i < arrSize; i++)
        std::cin >> array[i];

}

int main()

{   int arr[MAX_SIZE];
    int size;

    enterArray(arr,size);

    size_t seq_length = 1;
    int longestElement = arr[0];

    size_t curLength = 1;
    int curLongest = arr[0];

    for (size_t i = 1; i < size ; i++)
    {
        if (arr[i] == curLongest)
            curLength++;
        else
        {
            curLength = 1;
            curLongest = arr[i];
        }

        if (curLength >= seq_length)
        {
            seq_length = curLength;
            longestElement  = curLongest;
        }

    }
    for (size_t i = 0; i < seq_length; ++i)
    {
        std :: cout << longestElement << " ";
    }
    return 0;
}

