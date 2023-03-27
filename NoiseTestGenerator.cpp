#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

char generatedNoiseLetter()
{
    while (true)
    {
        int c = rand() % 95;
        char curChar = (char) c  + ' ';

        if (curChar == '.')
            continue;

        if (curChar >= '0' && curChar <= '9')
            continue;

        return curChar;
    }

}
size_t generateNoise(char buffer[], size_t maxNoiseCount)
{
    size_t generated = rand() % maxNoiseCount + 1;

    for ( size_t cnt = 0; cnt < generated; cnt ++)

         buffer[cnt] = generatedNoiseLetter();

    return generated;
}
int main() {
    int maxValue = 46341; // maxNum which square will fit in int

    srand(time(NULL));// initialize the pseudorandom num generator

    int number = rand() % maxValue + 1;// 1.. MAX_VALUE

    int numberSquare = number * number;// the number we will encode

    // the maximum amount of digits is 9(int_max)

    int max_gap_size = 10; // we will have up to 6 noise characters between the numbers

    char buffer[200] = {0};
    size_t curPos = 0;

    int curNumber = numberSquare;

    char theNumber[10];

    sprintf(theNumber, "%d", numberSquare);
    size_t numberSize = strlen(theNumber);

    // generate the first noise sequence
    curPos = generateNoise(buffer, max_gap_size);

    for (size_t curNumPos = 0; curNumPos < numberSize; curNumPos++) {
        buffer[curPos] = theNumber[curNumPos];
        curPos++;
        curPos += generateNoise(buffer + curPos, max_gap_size);
    }

    buffer[curPos] = '.';
    std::cout << buffer << std::endl;
    std::cout << number << std::endl;
    return 0;

}