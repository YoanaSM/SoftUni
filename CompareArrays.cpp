#include<iostream>
using namespace std;

void enterArr(int arr[], int & size)
{
   cin >> size;

    for (int i = 0; i < size; i++)

        cin >> arr[i];

}

bool areEqual(int array1[],int & size1, int array2[], int & size2)
{
    if (size1!=size2)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < size1; i++)
        {
            if (array1[i] != array2[i])

                return false;
            break;


        }
    }
    return true;
}
const int MAX_SIZE = 2000;
int main()

{
    int arr1[MAX_SIZE];
    int size1;
    enterArr(arr1,size1);

    int arr2[MAX_SIZE];
    int size2;
    enterArr(arr2, size2);

    if (areEqual(arr1, size1, arr2, size2))
    {
        std::cout << "equal";
    }
    else
    {
        std::cout << "not equal";
    }

    return 0;
}



