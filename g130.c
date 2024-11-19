/*Dev wants to write a program for a school project that takes an integer input and calculates the sum of its odd digits using pointer arithmetic. Help him by writing the code.

Input format :
The input consists of an integer n.

Output format :
The output displays an integer representing the sum of the odd digits of n.

*/

#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int sum = 0;
    int* ptr = &number;

    while (*ptr != 0) {
        int digit = *ptr - ((*ptr / 10) * 10); 
        if (digit % 2 != 0) {
            sum += digit;
        }
        *ptr /= 10;
    }

    printf("%d\n", sum);

    return 0;
}
