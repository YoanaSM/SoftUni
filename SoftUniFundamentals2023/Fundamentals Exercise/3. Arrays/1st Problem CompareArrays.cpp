#include <iostream>
bool areEqual(int arr1[], int length1, int arr2[], int length2)
{

    if (length1!= length2)
    {


        return false;
    }

    for (size_t i = 0; i < length1; i++)
    {

        if (arr1[i] != arr2[i])
        {
            return false;
            break;

        }

    }

    return true;

}
const int MAX_SIZE = 20;
int main()
{
    int N1;
    std::cin >> N1;
    int arr1[MAX_SIZE];
    for (size_t i = 0; i < N1; i++)
    {
        std::cin >> arr1[i];
    }
    int N2;
    std::cin >> N2;
    int arr2[MAX_SIZE];
    for (size_t i = 0; i < N2; i++)
    {
        std::cin >> arr2[i];
    }

    if (areEqual(arr1, N1, arr2, N2))
    {
        std::cout << "equal";
    }
    else
    {
        std::cout << "Not equal";
    }
    return 0;
}
