// FIND ACSII VALUES OF CHARACTERS IN C

#include <stdio.h>
int main() {
    char ch = '\0';
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    // Print the ASCII value of the character
    printf("ASCII value of '%c' is %d\n", ch, ch);
    
    return 0;
}