// Reverse the number
#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    printf("Reversed Number = %d\n", reversed);

    return 0;
}
