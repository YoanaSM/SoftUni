#include <iostream>
using namespace std;
void print_triangle(int n) {
    for (int i = 1; i <= n; i++) {      // iterate over rows
        for (int j = 1; j <= i; j++) {  // iterate over columns
            std::cout << j << " ";
        }
        for (int k = i - 1; k >= 1; k--) {  // iterate over columns (in reverse)
            std::cout << k << " ";
        }
        std::cout << std::endl;
    }

}
int main()
{
    int n;
    cin >> n;
    print_triangle(n);
}

